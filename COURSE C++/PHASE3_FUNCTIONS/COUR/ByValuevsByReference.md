# Function Parameters — By Value vs By Reference

## 1. What is a Parameter?

Un **parameter** est une variable reçue par une fonction.

Exemple :

```cpp
void showAge(int age)
{
    cout << age;
}
```

Ici :

```cpp
int age
```

est un **parameter**.

Quand on appelle :

```cpp
showAge(23);
```

`23` est l'**argument**.

---

# 2. Pass By Value

**By Value** signifie qu'on envoie **une copie** de la valeur à la fonction.

La fonction travaille donc sur une **copie**, pas sur la variable originale.

### Exemple

```cpp
#include <iostream>
using namespace std;

void change(int x)
{
    x = 100;
}

int main()
{
    int number = 10;

    change(number);

    cout << number << endl;

    return 0;
}
```

### Résultat

```text
10
```

Pourquoi ?

Avant :

```text
number = 10
```

On appelle :

```cpp
change(number);
```

La fonction reçoit une copie :

```text
number → 10
             ↓
          copie x = 10
```

Dans la fonction :

```cpp
x = 100;
```

On change seulement la copie.

```text
number = 10
x      = 100
```

Après la fonction, `x` disparaît.

Donc :

```text
number = 10
```

---

# 3. Pass By Reference

**By Reference** signifie qu'on donne à la fonction une **référence vers la variable originale**.

On utilise `&`.

### Exemple

```cpp
#include <iostream>
using namespace std;

void change(int &x)
{
    x = 100;
}

int main()
{
    int number = 10;

    change(number);

    cout << number << endl;

    return 0;
}
```

### Résultat

```text
100
```

Pourquoi ?

Ici :

```cpp
int &x
```

`x` fait référence directement à `number`.

```text
number = 10
    ↑
    │
    x
```

Quand on fait :

```cpp
x = 100;
```

on modifie directement `number`.

Donc :

```text
number = 100
```

---

# 4. Différence principale

| By Value                               | By Reference                        |
| -------------------------------------- | ----------------------------------- |
| Envoie une copie                       | Travaille avec l'original           |
| `int x`                                | `int &x`                            |
| Modifier `x` ne modifie pas l'original | Modifier `x` modifie l'original     |
| Valeur originale protégée              | Valeur originale peut être modifiée |

---

# 5. Exemple côte à côte

### By Value

```cpp
void change(int x)
{
    x = 50;
}

int main()
{
    int number = 10;

    change(number);

    cout << number;
}
```

Résultat :

```text
10
```

---

### By Reference

```cpp
void change(int &x)
{
    x = 50;
}

int main()
{
    int number = 10;

    change(number);

    cout << number;
}
```

Résultat :

```text
50
```

---

# 6. Exemple avec deux paramètres

### By Value

```cpp
int add(int a, int b)
{
    return a + b;
}
```

On envoie des copies de `a` et `b`.

```cpp
int result = add(10, 5);
```

La fonction retourne :

```text
15
```

---

### By Reference

On peut utiliser une fonction pour modifier plusieurs variables :

```cpp
void change(int &a, int &b)
{
    a = 100;
    b = 200;
}

int main()
{
    int x = 10;
    int y = 20;

    change(x, y);

    cout << x << endl;
    cout << y << endl;
}
```

Résultat :

```text
100
200
```

Parce que `a` correspond directement à `x` et `b` correspond directement à `y`.

---

# 🧠 Astuce pour retenir

### By Value

```cpp
void test(int x)
```

➡️ **COPY**

```text
original → copie
              ↓
          modification
```

L'original ne change pas.

### By Reference

```cpp
void test(int &x)
```

➡️ **ORIGINAL**

```text
original
   ↑
   │
   x
```

La modification change l'original.

## ⭐ À retenir

> **By Value = copie**

> **By Reference = référence vers l'original**

Le symbole important est :

```cpp
&
```

Donc :

```cpp
int x     // By Value
int &x    // By Reference
```
