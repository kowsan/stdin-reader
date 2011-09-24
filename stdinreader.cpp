#include "stdinreader.h"
#include <QTextStream>


STDINReader::STDINReader(QObject *parent) :
    QThread(parent)
{

}

void STDINReader::run()
{
    while (true)
    {
        QTextStream inp(stdin);
        QString str = "";
        inp >> str;
        emit dataReceived(str);
    }


}

void STDINReader::writeSTDOUT(const QString &message)
{
    QTextStream out(stdout);
    out << message;
    out.flush();

}
void STDINReader::writeSTDERRR(const QString &errorString)
{
    QTextStream err(stderr);
    err << errorString;
    err.flush();
}


