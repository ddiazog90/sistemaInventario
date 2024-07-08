#ifndef REGISTERPRODUCT_H
#define REGISTERPRODUCT_H

#include "headers/logic_product.h"
#include <QWidget>

namespace Ui {
class registerProduct;
}

class registerProduct : public QWidget
{
    Q_OBJECT

public:
    explicit registerProduct(QWidget *parent = nullptr);
    ~registerProduct();

private:
    Ui::registerProduct *ui;
    logic_product lp,
                  *ptrLp=nullptr;
    void clearFields();


private slots:
    void saveProduct();
};

#endif // REGISTERPRODUCT_H
