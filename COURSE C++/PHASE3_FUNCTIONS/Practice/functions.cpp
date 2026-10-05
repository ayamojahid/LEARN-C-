
// ## 2️⃣ Function

// Une fonction fait un calcul et **retourne une valeur**.

// ```cpp
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}

int main()
{
    int resultat = addition(10, 5);

    cout << resultat << endl;

    return 0;
}
// ```

// ### Résultat

// ```text
// 15
// ```

// 👉 `addition()` retourne `15`, et on met cette valeur dans `resultat`.

// ---