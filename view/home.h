#ifndef HOME_H
#define HOME_H

#include "view/registerproduct.h"
#include <QWidget>

namespace Ui {
class home;
}

class home : public QWidget
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private:
    Ui::home *ui;
    registerProduct *uiRp;
private slots:
    void callRegisterProduct();

};

#endif // HOME_H
