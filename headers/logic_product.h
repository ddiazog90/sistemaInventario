#ifndef LOGIC_PRODUCT_H
#define LOGIC_PRODUCT_H

#include "headers/productDAO.h"
class logic_product{
private:
    productDAO pdao;

public:
    logic_product();
    ~logic_product();
    bool save(string,int,double);
    vector<string> loadInfoProduct(int);//Permite recorrer cada producto almacenado
};

#endif // LOGIC_PRODUCT_H
