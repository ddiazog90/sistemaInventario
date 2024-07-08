#include "..//headers/productDAO.h"

productDAO::productDAO(){}
productDAO::~productDAO(){}
productDAO::productDAO(const product& p_){
    this->p=p_;
}
void productDAO::writeProducts(){
    archivo.open(path,ios::app);
    if(archivo.is_open()){
        archivo<<p.information();
        archivo.close();
    }

}
