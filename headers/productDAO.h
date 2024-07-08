#ifndef PRODUCTDAO_H
#define PRODUCTDAO_H

#include "headers/product.h"
#include <fstream>
#include <vector>
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
    vector<product> readProducts();
};

#endif // PRODUCTDAO_H
