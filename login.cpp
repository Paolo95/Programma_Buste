#include "login.h"
#include "ui_login.h"
#include "info.h"
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("gerico");

    if (db.open()){
        statusBar()->setStyleSheet("color: green");
        statusBar()->showMessage("Database connesso!");
    }
        else{
            ui->BtnLogin->setEnabled(false);
            statusBar()->setStyleSheet("color: red");
            statusBar()->showMessage("Database non connesso!");
        }
    }

Login::~Login()
{
    delete ui;
}

void Login::on_BtnEsci_clicked()
{
    exit(EXIT_SUCCESS);
}

void Login::on_BtnInfo_clicked()
{
    uiInfo = new Info (this);
    uiInfo->show();
}

void Login::on_BtnLogin_clicked()
{

}
