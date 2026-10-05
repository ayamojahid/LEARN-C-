
// ## 3️⃣ Les deux ensemble procedure et function

// ```cpp
#include <iostream>
using namespace std;

void afficherMessage()
{
    cout << "Bienvenue !" << endl;
}

int multiplier(int a, int b)
{
    return a * b;
}

int main()
{
    afficherMessage();

    int resultat = multiplier(4, 5);

    cout << resultat << endl;

    return 0;
}


/* 

### Résultat

```text
Bienvenue !
20
```

### 🧠 Très simple

```text
Procedure
    ↓
faire une action
    ↓
pas de valeur retournée

Function
    ↓
faire un calcul / traitement
    ↓
retourner une valeur
```

**Exemple :**

`afficherMessage()` → Procedure

`multiplier(4, 5)` → Function → retourne `20`
*/