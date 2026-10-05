// `AA` / `AB` / `AC` / `AD`      | **Print Letters Horizontally**


#include <iostream>
using namespace std;

int main() {
    for(int i = 1 ; i<=10 ; i++) {
        
            
        cout << 'A';
        cout << char( 'A' + i -1 );
        cout << endl;
        
    }
}


//methode 

/*
(Global Scope)

#include <iostream>

using namespace std;

aint main() {

-0

for (int i = 65; i <= 90; i++)

cout << "Letter:" << char(i) << endl;
I
for (int j = 65; j <= 90; j++)

cout << char(i) << char(j) << "\n";

cout << "

-\n";

3
return 0;  */