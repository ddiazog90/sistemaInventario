#ifndef USERDAO_H
#define USERDAO_H

#include "headers/user.h"
#include <vector>
#include <fstream>
class userDAO{
private:
    user usuario;
    fstream archivo;
public:
    userDAO();
    userDAO(const user&);
    vector<string> loadUsers();//Leer todos los registros del archivo y almacenarlos en el vector
};

#endif // USERDAO_H
