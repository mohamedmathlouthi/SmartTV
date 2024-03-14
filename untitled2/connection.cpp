#include "connection.h"
#include <QMessageBox>
Connection::Connection()
{




}
bool Connection::createconnect() {
bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd"); // Remplacez "localhost" par le nom de votre serveur
db.setUserName("mathlouthi"); // Remplacez "test" par votre nom d'utilisateur
db.setPassword("mathlouthi"); // Remplacez "test" par votre mot de passe
if(db.open())
        test= true;




        return test;
    }
