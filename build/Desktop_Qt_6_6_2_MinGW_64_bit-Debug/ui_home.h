/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_usuarios;
    QPushButton *btn_registrar;
    QPushButton *btn_consultar;

    void setupUi(QWidget *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName("home");
        home->resize(400, 204);
        gridLayoutWidget = new QWidget(home);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(60, 20, 281, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_usuarios = new QPushButton(gridLayoutWidget);
        btn_usuarios->setObjectName("btn_usuarios");
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(14);
        font.setBold(true);
        btn_usuarios->setFont(font);

        gridLayout->addWidget(btn_usuarios, 1, 0, 1, 1);

        btn_registrar = new QPushButton(gridLayoutWidget);
        btn_registrar->setObjectName("btn_registrar");
        btn_registrar->setFont(font);

        gridLayout->addWidget(btn_registrar, 0, 0, 1, 1);

        btn_consultar = new QPushButton(gridLayoutWidget);
        btn_consultar->setObjectName("btn_consultar");
        btn_consultar->setFont(font);

        gridLayout->addWidget(btn_consultar, 2, 0, 1, 1);


        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QWidget *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "HOME ", nullptr));
        btn_usuarios->setText(QCoreApplication::translate("home", "USUARIOS", nullptr));
        btn_registrar->setText(QCoreApplication::translate("home", "REGISTRAR", nullptr));
        btn_consultar->setText(QCoreApplication::translate("home", "CONSULTAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
