#include "passwords.h"

bool login(string name, string password){
    if (find_user(name)){
        string s = get_password(name);
        if(password==s) return true;
        else return false;
    }
    else return false;
}
