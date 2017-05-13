
#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //EcoCAR w;
    MainWindow w;
    //w.updateValue();
    w.showFullScreen();
    a.setOverrideCursor(Qt::BlankCursor);

    //w.startTimer();



    return a.exec();
}
