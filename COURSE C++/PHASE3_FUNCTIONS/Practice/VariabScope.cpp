
#include <iostream>
using namespace std;

int x = 100;   // Global variable

void test()
{
    int y = 50;   // Local variable

    cout << "Dans test :" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

int main()
{
    int z = 20;   // Local variable

    cout << "Dans main :" << endl;
    cout << "x = " << x << endl;
    cout << "z = " << z << endl;

    test();

    return 0;
}





// ### Résultat

// ```text
// Dans main :
// x = 100
// z = 20

// Dans test :
// x = 100
// y = 50
// ```

// ### Pourquoi ?

// ```text
// x = 100
// ↓
// GLOBAL
// ↓
// main() peut l'utiliser
// test() peut l'utiliser


// z = 20
// ↓
// LOCAL à main()
// ↓
// seulement main()


// y = 50
// ↓
// LOCAL à test()
// ↓
// seulement test()
// ```

// ### 🧠 Retenir

// ```text
// Global → plusieurs fonctions peuvent l'utiliser

// Local → seulement la fonction/bloc où elle est déclarée
// ```

// Par exemple, ceci serait une erreur :

// ```cpp
// int main()
// {
//     int z = 20;
// }

// void test()
// {
//     cout << z;   // ❌ z n'est pas accessible ici
// }
// ```

// Parce que `z` est **local à `main()`**.
