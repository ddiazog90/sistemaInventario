QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    sources/logic_user.cpp \
    sources/product.cpp \
    sources/productDAO.cpp \
    sources/user.cpp \
    sources/userDAO.cpp \
    view/home.cpp \
    view/registerproduct.cpp \
    widget.cpp

HEADERS += \
    headers/logic_user.h \
    headers/product.h \
    headers/productDAO.h \
    headers/user.h \
    headers/userDAO.h \
    view/home.h \
    view/registerproduct.h \
    widget.h

FORMS += \
    view/home.ui \
    view/registerproduct.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
