#ifndef LOGIC_USER_H
#define LOGIC_USER_H

#include "headers/userDAO.h"
class logic_user{
private:
    userDAO udao;
    user u;
public:
    bool validar(string, string);
};

#endif // LOGIC_USER_H
