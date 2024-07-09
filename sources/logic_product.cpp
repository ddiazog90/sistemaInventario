#include "..//headers/logic_product.h"
#include <QDebug>

logic_product::logic_product(){}
logic_product::~logic_product(){}
bool logic_product::save(string nameProduct,int stock,double price){
    product p(nameProduct,stock,price);
    productDAO pdao(p);
    pdao.writeProducts();
    return true;
}

vector<string> logic_product::loadInfoProduct(int index){
    vector<string> infoP;//retornar la informacion del producto
    vector<product> products=pdao.readProducts();//carga todos los productos del archivo


    int size=products.size();//tamano del vector
    if((index>=0) && (index<size)){
        infoP.push_back(products[index].getName());//nombre del producto
        infoP.push_back(to_string(products[index].getStock()));//casting int - string -> to_string  /string - int-> stoi
        infoP.push_back(to_string(products[index].getPrice()));//precio
    }


    return infoP;
}
