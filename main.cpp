#include <iostream>
#include "utils.h"
using namespace std;

int main(){
   string name, password;
   cin >> name;
   cin >> password;
   if(login(name, password)){
       cout << "Success!";
   } 
   else cout << "Login Failed :(";
}