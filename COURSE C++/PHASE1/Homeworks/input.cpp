#include <iostream>
#include <string>
using namespace std;

int main() {

    string Name;
    int Age;
    string City;
    string Country;
    int Monthly_Salary;
    int Yearly_Salary;
    string Gender;
    bool Married;

    cout << "Enter name : ";
    cin >> Name;

    cout << "Enter age : ";
    cin >> Age;

    cout << "Enter city : ";
    cin >> City;

    cout << "Enter country : ";
    cin >> Country;

    cout << "Enter monthly salary : ";
    cin >> Monthly_Salary;

    Yearly_Salary = Monthly_Salary * 12;

    cout << "Enter gender M or F : ";
    cin >> Gender;

    cout << "Married true or false : ";
    cin >> Married;

    cout << "********** Your information are : ***********" << endl;

    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << Monthly_Salary << endl;
    cout << "Yearly Salary: " << Yearly_Salary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << Married << endl;
}