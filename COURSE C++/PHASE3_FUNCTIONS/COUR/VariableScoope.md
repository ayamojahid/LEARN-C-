# Variable Scope — Local vs Global Variables

## 1. What is Variable Scope?

**Scope** = la zone du programme dans laquelle une variable peut être utilisée.

👉 En simple :

> **Scope = où la variable est accessible.**

Une variable peut être :

* **Local** → accessible seulement dans une certaine zone.
* **Global** → accessible dans plusieurs parties du programme.

---

# 2. Local Variable

Une **Local Variable** est une variable déclarée **à l'intérieur d'une fonction ou d'un bloc `{ }`**.

Elle est accessible seulement dans cette zone.

### Exemple

```cpp
#include <iostream>
using namespace std;

void show()
{
    int age = 23;

    cout << age << endl;
}

int main()
{
    show();

    return 0;
}
```

Ici :

```cpp
int age = 23;
```

est une **local variable** de `show()`.

Elle existe seulement dans :

```cpp
void show()
{
    // age existe ici
}
```

On ne peut pas faire :

```cpp
int main()
{
    cout << age;
}
```

❌ Parce que `age` appartient à `show()`.

---

# 3. Global Variable

Une **Global Variable** est déclarée **en dehors de toutes les fonctions**.

Elle peut être utilisée par plusieurs fonctions.

### Exemple

```cpp
#include <iostream>
using namespace std;

int age = 23;   // Global variable

void showAge()
{
    cout << age << endl;
}

int main()
{
    cout << age << endl;

    showAge();

    return 0;
}
```

Ici :

```cpp
int age = 23;
```

est globale.

Elle peut être utilisée dans :

```text
age
 ↓
main()
 ↓
showAge()
```

---

# 4. Local vs Global

| Local Variable                          | Global Variable                            |
| --------------------------------------- | ------------------------------------------ |
| Déclarée dans une fonction/bloc         | Déclarée en dehors des fonctions           |
| Scope limité                            | Scope plus large                           |
| Utilisable seulement dans sa zone       | Peut être utilisée par plusieurs fonctions |
| Exemple : `int age = 23;` dans `main()` | Exemple : `int age = 23;` avant `main()`   |

---

# 5. Exemple avec les deux

```cpp
#include <iostream>
using namespace std;

int x = 100;   // Global

void test()
{
    int y = 50;   // Local

    cout << x << endl;
    cout << y << endl;
}

int main()
{
    int z = 20;   // Local

    cout << x << endl;
    cout << z << endl;

    test();

    return 0;
}
```

### Les variables

```text
x → Global
    ↓
    main()
    test()

y → Local à test()
    ↓
    test() seulement

z → Local à main()
    ↓
    main() seulement
```

---

# 6. Même nom : Local vs Global

Il est possible d'avoir une variable locale avec le **même nom** qu'une variable globale.

```cpp
#include <iostream>
using namespace std;

int x = 100;   // Global

void test()
{
    int x = 50;   // Local

    cout << x << endl;
}

int main()
{
    cout << x << endl;

    test();

    return 0;
}
```

Résultat :

```text
100
50
```

Pourquoi ?

Dans `main()` :

```cpp
cout << x;
```

➡️ utilise le `x` global → `100`

Dans `test()` :

```cpp
int x = 50;
cout << x;
```

➡️ utilise le `x` local → `50`

La variable locale **cache** la variable globale dans cette zone.

---

# 7. Scope dans un bloc `{ }`

Le scope peut aussi être limité à un simple bloc.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    {
        int y = 20;

        cout << x << endl;
        cout << y << endl;
    }

    cout << x << endl;

    return 0;
}
```

`x` est accessible dans tout `main()`.

`y` est accessible seulement dans :

```cpp
{
    int y = 20;
}
```

Après `}` :

```cpp
cout << y;
```

❌ `y` n'existe plus dans cette zone.

---

# 8. Pourquoi utiliser des Local Variables ?

Les variables locales sont souvent préférables parce qu'elles permettent de garder les données **limitées à la fonction qui en a besoin**.

Par exemple :

```cpp
void calculate()
{
    int result = 50;

    cout << result;
}
```

`result` est utilisé uniquement pour le calcul de `calculate()`.

---

# 9. Pourquoi utiliser des Global Variables ?

Une variable globale peut être utile lorsqu'une même donnée doit être accessible par plusieurs fonctions.

Exemple :

```cpp
int compteur = 0;

void increment()
{
    compteur++;
}

void show()
{
    cout << compteur;
}
```

Ici, les deux fonctions utilisent le même `compteur`.

---

# 🧠 À retenir

### Local

```cpp
void test()
{
    int x = 10;
}
```

➡️ `x` est disponible **seulement dans `test()`**.

### Global

```cpp
int x = 10;

void test()
{
    cout << x;
}
```

➡️ `x` est disponible dans plusieurs parties du programme.

### La règle importante

> **Scope = la zone où une variable peut être utilisée.**

```text
Global
│
├── main()
│    └── variables locales
│
├── function1()
│    └── vari
```
