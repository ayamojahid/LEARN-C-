
#include <iostream>

using namespace std;

int main() {

    int a = 10;
    int b = 5;

    // Equal to
    cout << "a == b : " << (a == b) << endl;

    // Not equal to
    cout << "a != b : " << (a != b) << endl;

    // Greater than
    cout << "a > b  : " << (a > b) << endl;

    // Less than
    cout << "a < b  : " << (a < b) << endl;

    // Greater than or equal to
    cout << "a >= b : " << (a >= b) << endl;

    // Less than or equal to
    cout << "a <= b : " << (a <= b) << endl;

    return 0;
}

// ```

// ### Résultat

// ```text
// a == b : 0
// a != b : 1
// a > b  : 1
// a < b  : 0
// a >= b : 1
// a <= b : 0
// ```

// Ici :

// ```text
// a = 10
// b = 5
// ```

// Donc :

// * `10 == 5` → `false` → `0`
// * `10 != 5` → `true` → `1`
// * `10 > 5` → `true` → `1`
// * `10 < 5` → `false` → `0`
// * `10 >= 5` → `true` → `1`
// * `10 <= 5` → `false` → `0`

// **Important :** les parenthèses dans `cout << (a > b)` rendent la comparaison claire pour le compilateur et pour la lecture.
