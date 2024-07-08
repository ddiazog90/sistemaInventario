#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , uiHome(new home)
{
    ui->setupUi(this);
    ptrLU=&lu;
    connect(ui->btn_login,SIGNAL(clicked()),this,SLOT(validar()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::validar(){
    string usuario= ui->txt_user->text().toStdString();
    string psw= ui->txt_psw->text().toStdString();
    if(ptrLU->validar(usuario,psw)){
        QMessageBox::information(this,"GESTOR DE INVENTARIO","Bienvenido "+ QString::fromStdString(usuario));
        uiHome->show();//abre el home
        this->hide();//cerrar el login
    }else{
        QMessageBox::information(this,"GESTOR DE INVENTARIO","Credenciales incorrectas");
    }

}
