#ifndef __WIDGET_HELPER_H__
#define __WIDGET_HELPER_H__
#include <QLabel>

class QLabel;
class QSize;

class WidgetHelper
{
public:
    // Load a picture in QLable
    static void loadLablePicture(QLabel* lable, const QSize& size, const QString& file);
};

#endif // !__WIDGET_HELPER_H__
