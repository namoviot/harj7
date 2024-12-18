#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setCounter(0);
    //QPushButton* button = new QPushButton("button");
    w.show();
    return a.exec();
}
