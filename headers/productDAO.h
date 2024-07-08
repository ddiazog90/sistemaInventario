#ifndef PRODUCTDAO_H
#define PRODUCTDAO_H

#include "headers/product.h"
#include <fstream>
class productDAO{
private:
    product p;
    fstream archivo;
    string path="C://ejerciciosFS//ejercicio1//producto.txt";
public:
    productDAO();
    ~productDAO();
    productDAO(const product&);
    void writeProducts();
};

#endif // PRODUCTDAO_H
