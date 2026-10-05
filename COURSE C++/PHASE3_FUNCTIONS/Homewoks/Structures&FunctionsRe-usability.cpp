#include <iostream>
#include <string>
using namespace std;

struct strStudent {
string FirstName;
string LastName;
int Age;
double Grade;
};


void PrintInfo(strStudent Student) {

    cout << "==================" << endl;
    cout << "First Name: " << Student.FirstName << endl;
    cout << "Last Name: " << Student.LastName << endl;
    cout << "Age: " << Student.Age << endl;
    cout << "Grade: " << Student.Grade << endl;
    cout << "==================" << endl;


}

void ReadInfo(strStudent &Student) {

       
    cout << "Enter first name: " ;
    getline(cin , Student.FirstName) ;

     
    cout << "Enter last name: ";
    getline(cin , Student.LastName) ;

    cout << "Enter age: " ;
    cin >> Student.Age;

    cout << "Enter grade: " ;
    cin >> Student.Grade;

       cin.ignore();

}


int main() {
    strStudent student1; 
    ReadInfo(student1);
    PrintInfo(student1);


    strStudent student2; 
    ReadInfo(student2);
    PrintInfo(student2);


}