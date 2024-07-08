#include "registerproduct.h"
#include "ui_registerproduct.h"
#include <QMessageBox>
registerProduct::registerProduct(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerProduct)
{
    ui->setupUi(this);
    ptrLp=&lp;//Cargando la referencia de logica de producto al puntero
    //Lanza el evento para registrar los productos
    connect(ui->btn_agregar,SIGNAL(clicked()),this,SLOT(saveProduct()));
}

registerProduct::~registerProduct()
{
    delete ui;
}

void registerProduct::saveProduct(){
    std::string nameProduct=ui->txt_producto->text().toStdString();
    int stock=ui->txt_unidades->text().toInt();//QString casting int
    double price=ui->txt_precio->text().toDouble();//QString casting double
    if(ptrLp->save(nameProduct,stock,price)){
        QMessageBox::information(this,"Registro de Productos","Registro exitoso");
        clearFields();
    }
}

void registerProduct::clearFields(){
    ui->txt_producto->clear();
    ui->txt_precio->clear();
    ui->txt_unidades->clear();
}
