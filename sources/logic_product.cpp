#include "..//headers/logic_product.h"

logic_product::logic_product(){}
logic_product::~logic_product(){}
bool logic_product::save(string nameProduct,int stock,double price){
    product p(nameProduct,stock,price);
    productDAO pdao(p);
    pdao.writeProducts();
    return true;
}
