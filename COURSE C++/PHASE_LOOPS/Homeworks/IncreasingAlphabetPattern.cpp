//`A` → `AB` → `ABC` → ... → `ABCDEF`  
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 6; i++) {

        for (char j = 'A'; j <= 'A' + i - 1; j++) {
            cout << j;
        }

        cout << endl;
    }
}