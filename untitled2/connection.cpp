#include "connection.h"
#include "mainwindow.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("mathlouthi");//inserer nom de l'utilisateur
db.setPassword("mathlouthi");//inserer mot de passe de cet utilisateur


if (db.open())
test=true;







    return  test;
}
