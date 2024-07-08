#include "..//headers/logic_user.h"
#include <string>

bool logic_user::validar(string u, string p){
    bool access=false;
    vector<string> users=udao.loadUsers();//carga todos los usuarios
    for(const string & usuario:users){
        if(usuario == (u+";"+p)){
            access=true;
            break;
        }

    }
    return access;
}
