#include "widget.h"
#include <QApplication>
#include<QSplashScreen>
#include<QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("Tentativa 1");
    QSplashScreen*telaSplash=new QSplashScreen;
    telaSplash->setPixmap(QPixmap(":/new/prefix1/AI.jpg"));
    telaSplash->show();
    QTimer::singleShot(2000,telaSplash,SLOT(close()));
    QTimer::singleShot(2000,&w,SLOT(show()));
    return a.exec();
}
