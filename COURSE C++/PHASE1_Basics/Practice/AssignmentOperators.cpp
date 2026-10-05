
#include <iostream>

using namespace std;

int main() {

    // =========================
    // 1. =
    // =========================

    int x = 10;

    cout << "Initial value : " << x << endl;


    // =========================
    // 2. +=
    // =========================

    x += 5;   // x = x + 5

    cout << "After += 5 : " << x << endl;


    // =========================
    // 3. -=
    // =========================

    x -= 3;   // x = x - 3

    cout << "After -= 3 : " << x << endl;


    // =========================
    // 4. *=
    // =========================

    x *= 2;   // x = x * 2

    cout << "After *= 2 : " << x << endl;


    // =========================
    // 5. /=
    // =========================

    x /= 4;   // x = x / 4

    cout << "After /= 4 : " << x << endl;


    // =========================
    // 6. %=
    // =========================

    x %= 3;   // x = x % 3

    cout << "After %= 3 : " << x << endl;


    return 0;
}


// ```

// ### Résultat

// ```text
// Initial value : 10
// After += 5 : 15
// After -= 3 : 12
// After *= 2 : 24
// After /= 4 : 6
// After %= 3 : 0
// ```

// ### 🧠 Suivons `x`

// ```text
// x = 10

// x += 5  → 15

// x -= 3  → 12

// x *= 2  → 24

// x /= 4  → 6

// x %= 3  → 0
// ```

// ### À retenir

// ```text
// =    → donner une valeur
// +=   → ajouter
// -=   → soustraire
// *=   → multiplier
// /=   → diviser
// %=   → prendre le reste
// ```

// Par exemple :

// ```cpp
// x += 5;
// ```

// est simplement une écriture courte de :

// ```cpp
// x = x + 5;
// ```
