#include "widget.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
   // w.resize(656,512);
    w.setWindowState(w.windowState() ^ Qt::WindowFullScreen);

    qDebug()<<"w : "<<a.desktop()->width();
    qDebug()<<"h : "<<a.desktop()->height();
    w.show();

    return a.exec();
}
