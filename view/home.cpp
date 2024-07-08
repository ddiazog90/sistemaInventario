#include "home.h"
#include "ui_home.h"

home::home(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::home)
    , uiRp(new registerProduct)
{
    ui->setupUi(this);

    connect(ui->btn_registrar,SIGNAL(clicked()),this,SLOT(callRegisterProduct()));
}

home::~home()
{
    delete ui;
    delete uiRp;
}
void home::callRegisterProduct(){
    uiRp->show();
}
