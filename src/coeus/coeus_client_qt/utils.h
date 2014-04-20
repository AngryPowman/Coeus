#ifndef __UTILS_H__
#define __UTILS_H__

#include <QtCore/QTimer>
#include <QtCore/QCoreApplication>

namespace utils
{
    /// 让当前线程等待一段时间
    static void wait(int time)
    {
        QTimer t; 
        t.start(time);

        while(t.remainingTime() < time)
        {
            QCoreApplication::processEvents();
        }
    }
}

#endif // !__UTILS_H__
