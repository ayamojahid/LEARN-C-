# 🔹 Enums with IF Statements

## 1. Pourquoi utiliser un `enum` ?

Un programme travaille souvent avec des **choix limités**.

Par exemple, une couleur peut être :

```text
Red
Green
Blue
```

On pourrait utiliser des nombres :

```cpp
int color = 0;
```

Mais si on lit :

```cpp
if (color == 0)
```

on ne sait pas immédiatement ce que signifie `0`.

Est-ce :

```text
0 = Red ?
0 = Green ?
0 = Blue ?
```

❌ Le code n'est pas très lisible.

---

## 2. La solution : `enum`

Avec un `enum`, on donne des **noms clairs** aux valeurs.

```cpp
enum Color
{
    Red,
    Green,
    Blue
};
```

Maintenant :

```cpp
Color color = Red;
```

est beaucoup plus facile à comprendre.

On sait directement que :

```text
color = Red
```

signifie que la couleur choisie est **Red**.

---

# 3. `enum` = valeurs nommées

Un `enum` permet donc de créer un type contenant un **ensemble limité de valeurs nommées**.

Exemple :

```cpp
enum Color
{
    Red,
    Green,
    Blue
};
```

Ici, `Color` peut représenter :

```text
Red
Green
Blue
```

L'intérêt principal est la **lisibilité du code**.

---

# 4. Exemple avec `int`

Sans `enum` :

```cpp
int color = 0;

if (color == 0)
{
    cout << "Red";
}
```

Le programme fonctionne, mais quand on lit :

```cpp
color == 0
```

il faut connaître la signification de `0`.

---

# 5. Exemple avec `enum`

Avec un `enum` :

```cpp
enum Color
{
    Red,
    Green,
    Blue
};

Color color = Red;

if (color == Red)
{
    cout << "Red";
}
```

Ici, la condition est immédiatement compréhensible :

```text
color == Red ?
```

👉 Est-ce que la couleur est rouge ?

---

# 6. `enum class` : encore plus clair

En C++, on peut utiliser :

```cpp
enum class Color
{
    Red,
    Green,
    Blue
};
```

Maintenant, on écrit :

```cpp
Color color = Color::Red;
```

Et pour comparer :

```cpp
if (color == Color::Red)
{
    cout << "Red";
}
```

### Pourquoi `Color::Red` ?

`Color` indique le type et `Red` indique la valeur.

```text
Color::Red
   │    │
   │    └── valeur
   └─────── enum
```

Cela rend le code très explicite.

---

# 7. Pourquoi `Color::Red` est meilleur que `0` ?

Compare :

### ❌ Avec un nombre

```cpp
if (color == 0)
```

On doit connaître la correspondance :

```text
0 → Red
1 → Green
2 → Blue
```

### ✅ Avec `enum class`

```cpp
if (color == Color::Red)
```

On comprend directement :

> La couleur est-elle rouge ?

### 🧠 C'est l'idée la plus importante

> **Enum donne un nom significatif à une valeur.**

---

# 8. Utiliser `enum class` avec `if`

Exemple complet :

```cpp
#include <iostream>
using namespace std;

enum class Color
{
    Red,
    Green,
    Blue
};

int main()
{
    Color color = Color::Red;

    if (color == Color::Red)
    {
        cout << "The color is Red";
    }

    return 0;
}
```

Résultat :

```text
The color is Red
```

---

# 9. `if...else if` avec Enum

Si nous avons plusieurs possibilités :

```cpp
#include <iostream>
using namespace std;

enum class Color
{
    Red,
    Green,
    Blue
};

int main()
{
    Color color = Color::Green;

    if (color == Color::Red)
    {
        cout << "Red";
    }
    else if (color == Color::Green)
    {
        cout << "Green";
    }
    else if (color == Color::Blue)
    {
        cout << "Blue";
    }

    return 0;
}
```

Résultat :

```text
Green
```

---

# 10. Comment réfléchir ?

Supposons :

```cpp
Color color = Color::Blue;
```

Le programme vérifie :

```text
color == Color::Red ?
        ↓
       FALSE

color == Color::Green ?
        ↓
       FALSE

color == Color::Blue ?
        ↓
       TRUE
```

Donc :

```text
Blue
```

---

# 11. Exemple avec les jours

Les jours sont un bon exemple parce qu'il y a un nombre limité de possibilités.

```cpp
enum class Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
```

On peut créer :

```cpp
Day today = Day::Monday;
```

Puis :

```cpp
if (today == Day::Monday)
{
    cout << "Start of the week";
}
```

Ici, le code est très facile à comprendre.

---

# 12. Exemple avec Gender

```cpp
enum class Gender
{
    Male,
    Female
};
```

Puis :

```cpp
Gender gender = Gender::Female;

if (gender == Gender::Female)
{
    cout << "Female";
}
else
{
    cout << "Male";
}
```

On comprend directement les valeurs possibles.

---

# 13. Exemple avec Marital Status

```cpp
enum class MaritalStatus
{
```
