#include <iostream>
#include "utils.h"
using namespace std;

int main(){
   string name, password;
   cout << "Enter Name" << endl;
   cin >> name;
   cout << "Enter Password" << endl;
   cin >> password;
   if(login(name, password)){
       cout << "Success!";
   } 
   else cout << "Login Failed :(";
}