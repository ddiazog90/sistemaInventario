#include "registerproduct.h"
#include "ui_registerproduct.h"

registerProduct::registerProduct(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerProduct)
{
    ui->setupUi(this);
}

registerProduct::~registerProduct()
{
    delete ui;
}
