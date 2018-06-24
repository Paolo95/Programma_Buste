#include "gestioneAnagrafica.h"
#include "ui_gestioneAnagrafica.h"

GestioneAnagrafica::GestioneAnagrafica(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestioneAnagrafica)
{
    ui->setupUi(this);
}

GestioneAnagrafica::~GestioneAnagrafica()
{
    delete ui;
}
