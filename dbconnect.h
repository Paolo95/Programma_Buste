#ifndef DBCONNECT_H
#define DBCONNECT_H

#include <QtSql/QtSql>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>
#include <iostream>

using namespace std;

class DbConnect
{
public:
    DbConnect();
    void closeConnection();
    void openConnection();
    bool isOpen();
    QSqlQuery executeQuery(QString query);
    QSqlError lastError ();

private:

    QSqlDatabase db;
    QMessageBox errorDb;
    bool check=false;
    QSqlQuery query;
};

#endif // DBCONNECT_H
