#include  <iostream>
using namespace std;

enum Day {
Monday,
Tuesday,
Wednesday,
Thursday,
Friday,
Saturday,
Sunday,
};

int main() {
    Day today = Day::Monday;
    cout << today ;

    return 0;
}