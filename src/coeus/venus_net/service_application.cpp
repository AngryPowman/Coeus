#include "service_application.h"
#include "server_handler.h"
#include "Poco/Net/SocketAcceptor.h"
#include "Poco/Net/SocketNotification.h"
#include "Poco/Net/StreamSocket.h"
#include "Poco/Net/ServerSocket.h"
#include "Poco/Net/TcpServer.h"
#include "Poco/Thread.h"
#include "Poco/Util/ServerApplication.h"
#include "Poco/Util/OptionSet.h"
#include "Poco/File.h"
#include "Poco/NotificationQueue.h"
#include "logger.h"
#include "message_dispatcher.h"
#include "message_queue_worker.h"

namespace Venus
{

ServiceApplication::ServiceApplication(const std::string& serviceName, MessageDispatcher* messageDispatcher)
    : _serviceName(serviceName), _messageQueue(messageDispatcher)
{
}

ServiceApplication::~ServiceApplication()
{

}

void ServiceApplication::initialize(Poco::Util::Application& self)
{
    ServerApplication::loadConfiguration();
    ServerApplication::initialize(self);
}

void ServiceApplication::uninitialize()
{
    ServerApplication::uninitialize();
}

void ServiceApplication::defineOptions(Poco::Util::OptionSet& options)
{
    ServerApplication::defineOptions(options);

    options.addOption(
        Poco::Util::Option("help", "h", "display help information on command line arguments")
        .required(false)
        .repeatable(false));
}

void ServiceApplication::handleOption(const std::string& name, const std::string& value)
{
    ServerApplication::handleOption(name, value);

    if (name == "help")
    {
        std::cout << "show help" << std::endl;
    }
}

int ServiceApplication::main(const std::vector<std::string>& args)
{
    //�����ö�ȡ��������Ϣ
    unsigned short port = (unsigned short) config().getInt("port", 36911);
    Poco::Net::SocketAddress listenAddress(_applicationParams->listen_address);
    Poco::Net::ServerSocket socket(listenAddress);
    Poco::Net::TCPServerParams* serverParams = new Poco::Net::TCPServerParams();
    serverParams->setMaxQueued(_applicationParams->max_queued);         //���Ӷ��������
    serverParams->setMaxThreads(_applicationParams->max_threads);       //���IO�߳���

    info_log(
        "\n"
        "===================== Server Startup ===================\n"
        "       Service Name = %s\n"
        "       Listen Port  = %d\n"
        "       I/O Thread   = %d\n"
        "       Max Queued   = %d\n"
        "========================================================\n"
        "�ҵ�����һƬ�޻ڣ�����������Ϧ���µı��ܣ���������ȥ���ഺ\n"
        "========================================================",
        _serviceName.c_str(), port, serverParams->getMaxThreads(), serverParams->getMaxQueued()
        );

    //������Ϣ���д����߳�
    MessageQueueWorker queueWorker(_messageQueue);
    Poco::ThreadPool::defaultPool().start(queueWorker);

    //�������ӹ���
    ConnectionFactory connectionFactory;
    connectionFactory.setMessageQueue(_messageQueue);

    //����TCP����
    Poco::Net::TCPServer server(&connectionFactory, socket, serverParams);
    server.start();
    info_log("Server started.");
    Poco::Util::ServerApplication::waitForTerminationRequest();

    _messageQueue.wakeUpAll();
    server.stop();

    return Application::EXIT_OK;
}

int ServiceApplication::run(int argc, char** argv, Venus::ServiceApplicationParams* params)
{
    _applicationParams = params;
    return Poco::Util::ServerApplication::run(argc, argv);
}
}