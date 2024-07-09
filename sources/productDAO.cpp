#include "..//headers/productDAO.h"
#include <iostream>
#include <string>
#include <sstream>
#include <QDebug>
using namespace std;

vector<string> split(string str, char delimitador){
    vector<string> tokens;
    stringstream ss(str);
    string item;
    while(getline(ss,item,delimitador)){
        tokens.push_back(item);
    }
    return tokens;
}

productDAO::productDAO(){}
productDAO::~productDAO(){}
productDAO::productDAO(const product& p_){
    this->p=p_;
}
void productDAO::writeProducts(){

    archivo.open(path,ios::app);
    if(archivo.is_open()){
        archivo<<p.information()<<endl;
        archivo.close();
    }

}

vector<product> productDAO::readProducts(){
    vector<product> products;
    vector<string> dataFile;//recupera el contenido del archivo
    archivo.open(path,ios::in);

    if(archivo.is_open()){
        string linea;
        while(getline(archivo,linea)){

            dataFile.push_back(linea);
        }
        archivo.close();
    }

    for(const auto &str:dataFile){
        vector<string>tokens=split(str,';');//separa por ;
        product p;
        p.setName(tokens[0]);//nombre del producto
        p.setStock(stoi(tokens[1]));//stock del producto
        p.setPrice(stod(tokens[2]));//precio del producto
        products.push_back(p);//agregar los productos
    }



    return products;
}
