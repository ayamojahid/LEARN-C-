//`12345678910` → `123456789` → ... → `1`
#include <iostream>
using namespace std;


int main() {
for(int i=1 ; i<=10 ; i++) {
    for(int j=1 ; j<=11-i ; j++) {
        cout << j ;
    }
        cout << endl;

}
}