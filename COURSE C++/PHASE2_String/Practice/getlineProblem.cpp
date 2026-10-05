#include <iostream>
#include <string>
using namespace std;

int main() {

    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}