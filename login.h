#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "info.h"

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

private:
    Ui::Login *ui;
    Info* uiInfo;
};

#endif // LOGIN_H
