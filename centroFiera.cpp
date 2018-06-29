#include "centroFiera.h"
#include "ui_centroFiera.h"

CentroFiera::CentroFiera(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CentroFiera)
{
    ui->setupUi(this);
}

CentroFiera::~CentroFiera()
{
    delete ui;
}

void CentroFiera::closeEvent (QCloseEvent *event)
{
    event->ignore();
    this->hide();
    MainMenu *menu = new MainMenu (this);
    menu->show();
}
