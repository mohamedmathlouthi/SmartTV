#include "mainwindow.h"
#include "connection.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    MainWindow w;
    bool test=c.createconnect();
    if(test)
    {w.show();
        QMessageBox::critical(nullptr,QObject::tr("database is open"),
                              QObject::tr("connection successful.\n"
                                          "Click Cancel to exit."),QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                              QObject::tr("connection failed.\n"
                                          "Click Cancel to exit."),QMessageBox::Cancel);

    return a.exec();
}







