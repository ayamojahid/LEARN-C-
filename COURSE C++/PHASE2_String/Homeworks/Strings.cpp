
#include <iostream>
#include <string>
using namespace std;


int main () {
    string fullname , string2 , string3;

    cout << "Please inter your name : "  ;
    getline(cin , fullname);
     
    cout << "Please string2 : ";
    getline(cin , string2);

    cout << "Please string3 : ";
    getline(cin , string3);

    cout << "The Length of name is : " << fullname.length() << endl;
    cout << "characters at 0 2 4 7 are:  " << fullname[0] << "  "  << fullname[2] << "  " << fullname[4] <<  "  " << fullname[7] << endl ;


    cout << "Concatenating String2 and String3  " << string2 + string3 << endl;


    int numInt1 = stoi(string2);
    int numInt2 = stoi(string3);

    cout << numInt1 << " * " << numInt2 << " = " << numInt1*numInt2 << endl;

return 0;

}