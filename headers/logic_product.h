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
};

#endif // LOGIC_PRODUCT_H
