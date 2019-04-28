#include "mainMenu.h"
#include "ui_mainMenu.h"
#include "login.h"


MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    popolaTabellaReminders();
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

void MainMenu::popolaTabellaReminders(){

    model = new QStringListModel(this);
    CentroFiera *c = new CentroFiera(this);
    if (c->numero_buste_biblioteca("ROSSE")<=50) list<<"Buste rosse in Biblioteca in esaurimento!";
    if (c->numero_buste_biblioteca("BLU")<=50)  list<<"Buste blu in Biblioteca in esaurimento!";
    if (c->numero_buste_biblioteca("BIANCHE")<=50) list<<"Buste bianche in Biblioteca in esaurimento!";
    if (c->numero_buste_biblioteca("VERDI")<=50) list<<"Buste verdi in Biblioteca in esaurimento!";
    if (c->numero_buste_cf("ROSSE")<=50) list<<"Buste rosse in Centro Fiera in esaurimento!";
    if (c->numero_buste_cf("BLU")<=50) list<<"Buste blu in Centro Fiera in esaurimento!";
    if (c->numero_buste_cf("BIANCHE")<=50) list<<"Buste bianche in Centro Fiera in esaurimento!";
    if (c->numero_buste_cf("VERDI")<=50) list<<"Buste verdi in Centro Fiera in esaurimento!";
    if (c->numero_bidoni_biblioteca("MASTELLO","UMIDO")<=10) list<<"Mastelli umido in Biblioteca in esaurimento!";
    if (c->numero_bidoni_biblioteca("MASTELLO","VETRO")<=10) list<<"Mastelli vetro in Biblioteca in esaurimento!";
    if (c->numero_bidoni_biblioteca("SECCHIO","UMIDO","240")<=10) list<<"Bidoni umido da 240 in Biblioteca in esaurimento!";
    if (c->numero_bidoni_biblioteca("SECCHIO","UMIDO","360")<=10) list<<"Bidoni umido da 360 in Biblioteca in esaurimento!";
    if (c->numero_bidoni_biblioteca("SECCHIO","VETRO","240")<=10) list<<"Bidoni vetro in Biblioteca in esaurimento!";
    if (c->numero_bidoni_biblioteca("SECCHIO","VETRO","360")<=10) list<<"Bidoni vetro in Biblioteca in esaurimento!";
    if (c->numero_bidoni_cf("MASTELLO","UMIDO")<=10) list<<"Mastelli umido in Centro Fiera in esaurimento!";
    if (c->numero_bidoni_cf("MASTELLO","VETRO")<=10) list<<"Mastelli vetro in Centro Fiera in esaurimento!";
    if (c->numero_bidoni_cf("SECCHIO","UMIDO","240")<=10) list<<"Bidoni umido da 240 in Centro Fiera in esaurimento!";
    if (c->numero_bidoni_cf("SECCHIO","UMIDO","360")<=10) list<<"Bidoni umido da 360 in Centro Fiera in esaurimento!";
    if (c->numero_bidoni_cf("SECCHIO","VETRO","240")<=10) list<<"Bidoni vetro da 240 in Centro Fiera in esaurimento!";
    if (c->numero_bidoni_cf("SECCHIO","VETRO","360")<=10) list<<"Bidoni vetro da 360 in Centro Fiera in esaurimento!";
    model->setStringList(list);
    ui->tblReminders->setModel(model);
    ui->tblReminders->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
