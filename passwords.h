#ifndef PASSWORDS_H
#define PASWSWORDS_H

#include<map>
#include<string>

using namespace std;

map<string, string> passwords {
    {"Tinsmorem","Iltil"},
    {"Ulyglet","Snurgrurg"},
    {"Lafibnom","Diamdioc"},
    {"Thenbovir","Oudrarrouz"},
    {"Gallnip","Haulmi"},
    {"Froolvess","Holdiz"},
    {"Smameknuc","Hinnyual"},
    {"Smedekmet","Traolbubrorg"},
    {"Cebbnec","Khishohi"},
    {"Klolyddwac","Maennius"},
    {"Blivylnas","Jolmuulmohr"},
    {"Glyhamdas","Drustiel"},
    {"Hillnar","Nanruddiarth"},
    {"Phieddlu","Zussial"},
    {"Fnamdyn","Laszo"},
    {"Fladnivith","Nathentoih"},
    {"Phelnyll","Phorughoelle"},
    {"Snallbam","Skilzeda"},
    {"Fensmyl","Vrakniarth"},
    {"Pibkecim","Jerpuldo"}
};

//Return true only if the person is present in the database
bool find_user(string name){
    if(passwords.find(name) != passwords.end()) return true;
    else return false;
}

//Returns the password for a particular person
string get_password(string name){
    return passwords[name];
}

#endif
