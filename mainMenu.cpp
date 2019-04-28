#include "mainMenu.h"
#include "ui_mainMenu.h"
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

void MainMenu::on_BtnConsegnaMateriale_clicked()
{
    this->hide();
    Consegna_Materiale *materiale = new Consegna_Materiale(this);
    materiale->show();
}



void MainMenu::on_btnGestioneRichieste_clicked()
{
    this->hide();
    GestioneRichieste *richieste= new GestioneRichieste(this);
    richieste->show();
}

void MainMenu::on_btnAnagrafica_clicked()
{
    this->hide();
    GestioneAnagrafica *anagrafica = new GestioneAnagrafica(this);
    anagrafica->show();
}

void MainMenu::on_btnCentroFiera_clicked()
{
    this->hide();
    CentroFiera *fiera= new CentroFiera(this);
    fiera->show();
}

void MainMenu::on_btnGestioneMateriale_clicked()
{
    this->hide();
    GestioneMateriale *g_materiale= new GestioneMateriale(this);
    g_materiale->show();
}

void MainMenu::on_btnGestioneArrivi_clicked()
{
    this->hide();
    GestioneArrivi *arrivi = new GestioneArrivi(this);
    arrivi->show();
}

void MainMenu::on_btnBiblioteca_clicked()
{
    this->hide();
    Biblioteca *biblio= new Biblioteca(this);
    biblio->show();
}
