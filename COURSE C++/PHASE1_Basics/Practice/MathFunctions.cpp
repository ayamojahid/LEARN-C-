
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // 1. Square Root
    cout << "sqrt(25) = " << sqrt(25) << endl;


    // 2. Power
    cout << "pow(2, 3) = " << pow(2, 3) << endl;


    // 3. Absolute Value
    cout << "abs(-10) = " << abs(-10) << endl;


    // 4. Round
    cout << "round(4.6) = " << round(4.6) << endl;


    // 5. Ceiling
    cout << "ceil(4.1) = " << ceil(4.1) << endl;


    // 6. Floor
    cout << "floor(4.9) = " << floor(4.9) << endl;


    // 7. Maximum
    cout << "fmax(10, 20) = " << fmax(10, 20) << endl;


    // 8. Minimum
    cout << "fmin(10, 20) = " << fmin(10, 20) << endl;


    return 0;
}

/*

### Résultat

```text
sqrt(25) = 5
pow(2, 3) = 8
abs(-10) = 10
round(4.6) = 5
ceil(4.1) = 5
floor(4.9) = 4
fmax(10, 20) = 20
fmin(10, 20) = 10
```

### 🧠 Les 8 fonctions

```text
sqrt()   → racine carrée
pow()    → puissance
abs()    → valeur absolue
round()  → arrondi normal
ceil()   → arrondi vers le haut
floor()  → arrondi vers le bas
fmax()   → plus grande valeur
fmin()   → plus petite valeur
```

Et n'oublie pas :

```cpp
#include <cmath>
```

➡️ Cette ligne permet d'utiliser les fonctions mathématiques de C++.
*/