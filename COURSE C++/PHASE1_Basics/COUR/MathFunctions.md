# Math Functions in C++

Les **Math Functions** sont des fonctions déjà disponibles en C++ pour effectuer des **calculs mathématiques**.

Pour les utiliser, on inclut généralement :

```cpp
#include <cmath>
```

Puis on utilise les fonctions avec :

```cpp
std::fonction()
```

ou simplement `fonction()` si on utilise :

```cpp
using namespace std;
```

---

## 1. `sqrt()` — Square Root

`sqrt()` calcule la **racine carrée** d'un nombre.

```cpp
sqrt(25)
```

Résultat :

```text
5
```

Autre exemple :

```cpp
sqrt(16)
```

➡️ `4`

---

## 2. `pow()` — Power

`pow()` permet de calculer une **puissance**.

Syntaxe :

```cpp
pow(base, puissance)
```

Exemple :

```cpp
pow(2, 3)
```

Cela signifie :

```text
2³ = 2 × 2 × 2 = 8
```

Résultat :

```text
8
```

---

## 3. `abs()` — Absolute Value

`abs()` donne la **valeur absolue** d'un nombre.

La valeur absolue supprime le signe `-`.

```cpp
abs(-10)
```

➡️ `10`

```cpp
abs(10)
```

➡️ `10`

---

## 4. `round()` — Arrondir

`round()` arrondit un nombre au nombre entier le plus proche.

```cpp
round(4.6)
```

➡️ `5`

```cpp
round(4.4)
```

➡️ `4`

---

## 5. `ceil()` — Arrondi vers le haut

`ceil()` arrondit toujours **vers le haut**.

```cpp
ceil(4.1)
```

➡️ `5`

```cpp
ceil(4.9)
```

➡️ `5`

---

## 6. `floor()` — Arrondi vers le bas

`floor()` arrondit toujours **vers le bas**.

```cpp
floor(4.9)
```

➡️ `4`

```cpp
floor(4.1)
```

➡️ `4`

---

## 7. `fmax()` — Maximum

`fmax()` retourne la **plus grande** valeur.

```cpp
fmax(10, 20)
```

➡️ `20`

---

## 8. `fmin()` — Minimum

`fmin()` retourne la **plus petite** valeur.

```cpp
fmin(10, 20)
```

➡️ `10`

---

# Exemple complet

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "sqrt(25) = " << sqrt(25) << endl;

    cout << "pow(2, 3) = " << pow(2, 3) << endl;

    cout << "abs(-10) = " << abs(-10) << endl;

    cout << "round(4.6) = " << round(4.6) << endl;

    cout << "ceil(4.1) = " << ceil(4.1) << endl;

    cout << "floor(4.9) = " << floor(4.9) << endl;

    cout << "fmax(10, 20) = " << fmax(10, 20) << endl;

    cout << "fmin(10, 20) = " << fmin(10, 20) << endl;

    return 0;
}
```

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

# 🧠 Tableau à retenir

| Function  | Utilité              |       Exemple | Résultat |
| --------- | -------------------- | ------------: | -------: |
| `sqrt()`  | Racine carrée        |    `sqrt(25)` |      `5` |
| `pow()`   | Puissance            |    `pow(2,3)` |      `8` |
| `abs()`   | Valeur absolue       |    `abs(-10)` |     `10` |
| `round()` | Arrondi proche       |  `round(4.6)` |      `5` |
| `ceil()`  | Arrondi vers le haut |   `ceil(4.1)` |      `5` |
| `floor()` | Arrondi vers le bas  |  `floor(4.9)` |      `4` |
| `fmax()`  | Maximum              | `fmax(10,20)` |     `20` |
| `fmin()`  | Minimum              | `fmin(10,20)` |     `10` |

### À retenir

```text
#include <cmath>
```

➡️ permet d'utiliser les principales fonctions mathématiques de C++.

**Math Functions = fonctions qui nous évitent de calculer manuellement certaines opérations mathématiques.**
