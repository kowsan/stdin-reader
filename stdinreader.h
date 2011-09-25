#ifndef STDINREADER_H
#define STDINREADER_H

#include <QThread>

class STDINReader : public QThread
{
    Q_OBJECT
public:
    explicit STDINReader(QObject *parent = 0);


private:
    void run();

private slots:

signals:
    void dataReceived(const QString &data);

public slots:
    void writeSTDOUT(const QString &message);
    void writeSTDERRR(const QString &errorString);


};

#endif // STDINREADER_H
