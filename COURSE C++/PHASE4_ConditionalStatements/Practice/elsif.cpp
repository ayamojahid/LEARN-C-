#include <iostream>
using namespace std;

int main()
{
    int grade = 15;

    if (grade >= 18)
    {
        cout << "Excellent";
    }
    else if (grade >= 16)
    {
        cout << "Very Good";
    }
    else if (grade >= 14)
    {
        cout << "Good";
    }
    else if (grade >= 10)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}