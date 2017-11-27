#include "my_sistem.h"
#include <QApplication>
#include <QtGui>
#include <QtCore>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    my_sistem w;
    w.show();

    return a.exec();
}
