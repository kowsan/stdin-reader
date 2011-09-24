#include <QtCore/QCoreApplication>
#include <QTextStream>
#include <QDebug>

#include "stdinreader.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    STDINReader std;
    //sample usage
    // QObject::connect(&std,SIGNAL(dataReceived(QString)),&std,SLOT(writeSTDOUT(QString)));
    std.start(QThread::LowPriority);
    return a.exec();
}
