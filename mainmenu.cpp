#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "login.h"

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_BtnMenuEsci_clicked()
{
    MessageExitMainMenu.setWindowTitle("Vuoi uscire?");
    MessageExitMainMenu.setText("Vuoi uscire dal programma?");
    MessageExitMainMenu.setIcon(QMessageBox::Information);
    BtnSiMainMenu = MessageExitMainMenu.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoMainMenu = MessageExitMainMenu.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitMainMenu.exec();

    if (MessageExitMainMenu.clickedButton()==BtnSiMainMenu){
          MessageExitMainMenu.close();
          exit(EXIT_SUCCESS);
          }else{
          MessageExitMainMenu.removeButton(BtnSiMainMenu);
          MessageExitMainMenu.removeButton(BtnNoMainMenu);
          MessageExitMainMenu.close();
}
}

void MainMenu::on_BtnMenuLogin_clicked()
{
    this->hide();
    Login *l=new Login(this);
    l->show();
}

void MainMenu::closeEvent (QCloseEvent *event)
{
    MessageExitMainMenu.setWindowTitle("Vuoi uscire?");
    MessageExitMainMenu.setText("Vuoi uscire dal programma?");
    MessageExitMainMenu.setIcon(QMessageBox::Information);
    BtnSiMainMenu = MessageExitMainMenu.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoMainMenu = MessageExitMainMenu.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitMainMenu.exec();

    if (MessageExitMainMenu.clickedButton()==BtnSiMainMenu){
          MessageExitMainMenu.close();
          exit(EXIT_SUCCESS);
          }else{
          MessageExitMainMenu.removeButton(BtnSiMainMenu);
          MessageExitMainMenu.removeButton(BtnNoMainMenu);
          event->ignore();
}
}

