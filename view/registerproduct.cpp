#include "registerproduct.h"
#include "ui_registerproduct.h"
#include <QMessageBox>
registerProduct::registerProduct(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerProduct)
{
    ui->setupUi(this);
    ui->btn_agregar->setEnabled(false);
    ptrLp=&lp;//Cargando la referencia de logica de producto al puntero
    //Lanza el evento para registrar los productos
    connect(ui->btn_agregar,SIGNAL(clicked()),this,SLOT(saveProduct()));
    connect(ui->btn_next,SIGNAL(clicked()),this,SLOT(next()));
    connect(ui->btn_prev,SIGNAL(clicked()),this,SLOT(prev()));
    connect(ui->btn_new,SIGNAL(clicked()),this,SLOT(newProduct()));
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

void registerProduct::loadFields(int index){
    ui->btn_agregar->setEnabled(false);
    vector<string> p=ptrLp->loadInfoProduct(index);
    if(p.size()>0){
        ui->txt_producto->setText(QString::fromStdString(p[0]));
        ui->txt_unidades->setText(QString::fromStdString(p[1]));
        ui->txt_precio->setText(QString::fromStdString(p[2]));
    }else{
        QMessageBox::information(this,"Registro de Productos","No existen mas productos");
    }

}
void registerProduct::prev(){
    index--;//decrementar
    loadFields(index);
}
void registerProduct::next(){
    index++;//incrementar
    loadFields(index);
}
void registerProduct::newProduct(){
    clearFields();
    ui->btn_agregar->setEnabled(true);
}
