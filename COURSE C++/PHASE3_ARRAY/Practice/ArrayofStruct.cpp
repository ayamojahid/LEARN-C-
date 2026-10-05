#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string Name;
    int Age;
    double Grade;
};

int main()
{
    Student students[3] =
    {
        {"Aya", 23, 15.5},
        {"Sara", 22, 17.0},
        {"Salma", 24, 14.5}
    };

    cout << students[0].Name << endl;
    cout << students[0].Age << endl;
    cout << students[0].Grade << endl;

    cout << "----------------" << endl;

    cout << students[1].Name << endl;
    cout << students[1].Age << endl;
    cout << students[1].Grade << endl;

    return 0;
}