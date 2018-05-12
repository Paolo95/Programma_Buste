#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "info.h"
#include "mainMenu.h"
#include <QMessageBox>
#include <QCloseEvent>
#include "dbconnect.h"

using namespace std;

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();


private slots:
    void on_BtnEsci_clicked();

    void on_BtnInfo_clicked();

    void on_BtnLogin_clicked();

    void on_txtPassword_returnPressed();

private:
    Ui::Login *ui;
    Info* uiInfo;
    DbConnect *db;
    QSqlQuery query;
    QSqlRecord record;
    string stringQuery;
    string username;
    string password;
    QMessageBox error;
    QMessageBox MessageExitLogin;
    QAbstractButton *BtnSiLogin;
    QAbstractButton *BtnNoLogin;
    void closeEvent (QCloseEvent *event);
};

#endif // LOGIN_H
