#include "widget_helper.h"
#include <QPixmap>

void WidgetHelper::loadLablePicture(QLabel* lable, const QSize& size, const QString& file)
{
    QPixmap iconPixmap = QPixmap(file).scaled(size);
    lable->setPixmap(std::move(iconPixmap));
}
