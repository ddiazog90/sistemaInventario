#ifndef REGISTERPRODUCT_H
#define REGISTERPRODUCT_H

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
};

#endif // REGISTERPRODUCT_H
