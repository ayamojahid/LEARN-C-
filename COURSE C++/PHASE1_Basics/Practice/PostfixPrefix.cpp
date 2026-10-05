#include <iostream>
using namespace std;

int main()
{
    int A = 5;

    cout << "Valeur initiale de A : " << A << endl;

    cout << "++A : " << ++A << endl;
    cout << "A apres ++A : " << A << endl;

    A = 5;

    cout << "A++ : " << A++ << endl;
    cout << "A apres A++ : " << A << endl;

    A = 5;

    cout << "--A : " << --A << endl;
    cout << "A apres --A : " << A << endl;

    A = 5;

    cout << "A-- : " << A-- << endl;
    cout << "A apres A-- : " << A << endl;

    return 0;
}