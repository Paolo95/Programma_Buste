#include "login.h"
#include "ui_login.h"
#include "dbconnect.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->txtUsername->setFocus();

    db= new DbConnect();
    db->openConnection();

    if (db->isOpen()){
        statusBar()->setStyleSheet("color: green");
        statusBar()->showMessage("Database connesso!");
    }
        else{
            ui->BtnLogin->setEnabled(false);
            ui->txtUsername->setEnabled(false);
            ui->txtPassword->setEnabled(false);
            statusBar()->setStyleSheet("color: red");
            statusBar()->showMessage("Database non connesso!");
        }

      db->closeConnection();
}



Login::~Login()
{
    delete ui;
}

void Login::on_BtnEsci_clicked()
{
    MessageExitLogin.setWindowTitle("Vuoi uscire?");
    MessageExitLogin.setText("Vuoi uscire dal programma?");
    MessageExitLogin.setIcon(QMessageBox::Information);
    BtnSiLogin = MessageExitLogin.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoLogin = MessageExitLogin.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitLogin.exec();

    if (MessageExitLogin.clickedButton()==BtnSiLogin){
          MessageExitLogin.close();
          exit(EXIT_SUCCESS);
          }else{
          MessageExitLogin.removeButton(BtnSiLogin);
          MessageExitLogin.removeButton(BtnNoLogin);
          MessageExitLogin.close();

}
}

void Login::on_BtnInfo_clicked()
{
    uiInfo = new Info (this);
    uiInfo->show();
}

void Login::on_BtnLogin_clicked()
{
    db->openConnection();

    username=ui->txtUsername->text().toStdString();
    password=ui->txtPassword->text().toStdString();
    if ( username.empty() || password.empty() ){
    error.information(nullptr,"Errore","Inserisci username e password!");
    }else{
            stringQuery="SELECT * FROM utente WHERE (BINARY USERNAME ='"+username+ "'" + " AND BINARY PASSWORD='"+password+"')";
            query = db->executeQuery(QString::fromStdString(stringQuery));
            if (query.size()==0){
                error.information(nullptr,"Login non eseguito","Nome utente e/o password errati o non esistenti!");
            }else{
            this->hide();
            MainMenu *m = new MainMenu(this);
            m->show();
            }
    }
    db->closeConnection();

}


void Login::on_txtPassword_returnPressed()
{
    db->openConnection();

    username=ui->txtUsername->text().toStdString();
    password=ui->txtPassword->text().toStdString();
    if ( username.empty() || password.empty() ){
    error.information(nullptr,"Errore","Inserisci username e password!");
    }else{
            stringQuery="SELECT * FROM utente WHERE (BINARY USERNAME ='"+username+ "'" + " AND BINARY PASSWORD='"+password+"')";
            query = db->executeQuery(QString::fromStdString(stringQuery));
            if (query.size()==0){
                error.information(nullptr,"Login non eseguito","Nome utente e/o password errati o non esistenti!");
            }else{
            this->hide();
            MainMenu *m = new MainMenu(this);
            m->show();
            }
    }
    db->closeConnection();
}

void Login::closeEvent (QCloseEvent *event)
{

    MessageExitLogin.setWindowTitle("Vuoi uscire?");
    MessageExitLogin.setText("Vuoi uscire dal programma?");
    MessageExitLogin.setIcon(QMessageBox::Information);
    BtnSiLogin = MessageExitLogin.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoLogin = MessageExitLogin.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitLogin.exec();

    if (MessageExitLogin.clickedButton()==BtnSiLogin){
          MessageExitLogin.close();
          exit(EXIT_SUCCESS);
          }else{
          MessageExitLogin.removeButton(BtnSiLogin);
          MessageExitLogin.removeButton(BtnNoLogin);
          event->ignore();

}
}


