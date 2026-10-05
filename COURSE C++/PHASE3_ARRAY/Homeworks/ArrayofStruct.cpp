#include <iostream>
#include <string>
using namespace std;
 

struct Student{
string firstname;
string lastname;
int age;
int phone;
};

void PrintInfo(Student &info) {
    
    cout << "Enter First name:   " ; 
    cin >> info.firstname ;

    cout << "Enter Last name:   " ; 
    cin >> info.lastname ;

    cout << "Enter Enter age:  " ; 
    cin >> info.age ;

    cout << "Enter phone:    " ; 
    cin >> info.firstname ;
}


void PrintPersonInfo (Student Person[2])  {

    cout << "=============Person1============="  << endl ;
cout << "first Name" << Person[0].firstname << endl;
cout << "last Name" << Person[0].lastname << endl;
cout << "age" << Person[0].age << endl;
cout << "phone" << Person[0].phone << endl;

    cout << "=============Person2=============" << endl ;


cout << "first Name:  " << Person[1].firstname   << endl;
cout << "last Name:   " << Person[1].lastname  << endl;
cout << "age:   " << Person[1].age  << endl;
cout << "phone:    " << Person[1].phone << endl;
};


void ReadPersonInfo(Student Person[2]) {
PrintInfo(Person[0]);
PrintInfo(Person[1]);
};


    
int main() {
    Student Person[2];

    ReadPersonInfo(Person);
    PrintPersonInfo(Person);

    return 0;
     
}




