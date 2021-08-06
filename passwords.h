#ifndef PASSWORDS_H
#define PASWSWORDS_H

#include<map>
#include<string>
#include<vector>

using namespace std;

map<string, int> userids {
    {"Tinsmorem",0},
    {"Ulyglet",1},
    {"Lafibnom",2},
    {"Thenbovir",3},
    {"Gallnip",4},
    {"Froolvess",5},
    {"Smameknuc",6},
    {"Smedekmet",7},
    {"Cebbnec",8},
    {"Klolyddwac",9},
    {"Blivylnas",10},
    {"Glyhamdas",11},
    {"Hillnar",12},
    {"Phieddlu",13},
    {"Fnamdyn",14},
    {"Fladnivith",15},
    {"Phelnyll",16},
    {"Snallbam",17},
    {"Fensmyl",18},
    {"Pibkecim",19},
};

vector<string> passwords {
"Iltil",
"Snurgrurg",
"Diamdioc",
"Oudrarrouz",
"Haulmi",
"Holdiz",
"Hinnyual",
"Traolbubrorg",
"Khishohi",
"Maennius",
"Jolmuulmohr",
"Drustiel",
"Nanruddiarth",
"Zussial",
"Laszo",
"Nathentoih",
"Phorughoelle",
"Skilzeda",
"Vrakniarth",
"Jerpuldo"
};

bool find_userid(string name){
    if(userids.find(name) != userids.end()) return userids[name];
    else return -1;
}

string get_password(string name){
    int user_id = -1;
    if((user_id = find_userid(name)) < 0) return "";
    else return passwords[user_id];
}
#endif
