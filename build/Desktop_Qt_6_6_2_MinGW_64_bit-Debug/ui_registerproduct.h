/********************************************************************************
** Form generated from reading UI file 'registerproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPRODUCT_H
#define UI_REGISTERPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerProduct
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txt_producto;
    QLabel *label_2;
    QLineEdit *txt_unidades;
    QLabel *label_3;
    QLineEdit *txt_precio;
    QPushButton *btn_agregar;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_prev;
    QPushButton *btn_agregar_;

    void setupUi(QWidget *registerProduct)
    {
        if (registerProduct->objectName().isEmpty())
            registerProduct->setObjectName("registerProduct");
        registerProduct->resize(400, 206);
        formLayoutWidget = new QWidget(registerProduct);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 0, 361, 191));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        txt_producto = new QLineEdit(formLayoutWidget);
        txt_producto->setObjectName("txt_producto");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(12);
        txt_producto->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, txt_producto);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        txt_unidades = new QLineEdit(formLayoutWidget);
        txt_unidades->setObjectName("txt_unidades");
        txt_unidades->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, txt_unidades);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        txt_precio = new QLineEdit(formLayoutWidget);
        txt_precio->setObjectName("txt_precio");
        txt_precio->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, txt_precio);

        btn_agregar = new QPushButton(formLayoutWidget);
        btn_agregar->setObjectName("btn_agregar");
        btn_agregar->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, btn_agregar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_prev = new QPushButton(formLayoutWidget);
        btn_prev->setObjectName("btn_prev");
        btn_prev->setFont(font);

        horizontalLayout->addWidget(btn_prev);

        btn_agregar_ = new QPushButton(formLayoutWidget);
        btn_agregar_->setObjectName("btn_agregar_");
        btn_agregar_->setFont(font);

        horizontalLayout->addWidget(btn_agregar_);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(registerProduct);

        QMetaObject::connectSlotsByName(registerProduct);
    } // setupUi

    void retranslateUi(QWidget *registerProduct)
    {
        registerProduct->setWindowTitle(QCoreApplication::translate("registerProduct", "REGISTRO DE PRODUCTOS", nullptr));
        label->setText(QCoreApplication::translate("registerProduct", "PRODUCTO:", nullptr));
        label_2->setText(QCoreApplication::translate("registerProduct", "UNIDADES:", nullptr));
        label_3->setText(QCoreApplication::translate("registerProduct", "PRECIO:", nullptr));
        btn_agregar->setText(QCoreApplication::translate("registerProduct", "AGREGAR", nullptr));
        btn_prev->setText(QCoreApplication::translate("registerProduct", "<<", nullptr));
        btn_agregar_->setText(QCoreApplication::translate("registerProduct", ">>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerProduct: public Ui_registerProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPRODUCT_H
