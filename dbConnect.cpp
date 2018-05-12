#include "dbconnect.h"

DbConnect::DbConnect()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("gerico");
}

void DbConnect::openConnection()
{
    db.open();
}

bool DbConnect::isOpen()
{
    if (db.isOpen()) check=true;
    else check=false;
    return check;
}

void DbConnect::closeConnection()
{
    db.close();
}

QSqlQuery DbConnect::executeQuery(QString stringQuery)
{
    return db.exec(stringQuery);
}

QSqlError DbConnect::lastError(){
    return db.lastError();
}


