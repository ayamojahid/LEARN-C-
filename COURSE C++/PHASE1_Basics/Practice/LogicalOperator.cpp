
#include <iostream>
using namespace std;

int main() {

    bool a = true;
    bool b = false;

    // AND
    cout << "AND (&&): " << (a && b) << endl;

    // OR
    cout << "OR (||): " << (a || b) << endl;

    // NOT
    cout << "NOT (!a): " << (!a) << endl;
    cout << "NOT (!b): " << (!b) << endl;

    // With numbers
    int x = 10;
    int y = 5;

    cout << "Example AND: " << (x > 5 && y < 10) << endl;
    cout << "Example OR: " << (x < 5 || y < 10) << endl;
    cout << "Example NOT: " << !(x > 5) << endl;

    return 0;
}
