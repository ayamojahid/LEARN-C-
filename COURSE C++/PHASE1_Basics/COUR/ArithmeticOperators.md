# 🟦 C++ — Arithmetic Operators

Les **arithmetic operators** sont les opérateurs utilisés pour effectuer des **calculs mathématiques** en C++.

## 1️⃣ Les opérateurs principaux

| Operator | Nom            | Exemple  | Résultat |
| -------- | -------------- | -------- | -------: |
| `+`      | Addition       | `10 + 3` |     `13` |
| `-`      | Soustraction   | `10 - 3` |      `7` |
| `*`      | Multiplication | `10 * 3` |     `30` |
| `/`      | Division       | `10 / 2` |      `5` |
| `%`      | Modulo         | `10 % 3` |      `1` |

### 🧠 Le modulo `%`

Le **modulo donne le reste de la division**.

```cpp
10 % 3
```

10 ÷ 3 = 3 avec un **reste de 1**.

Donc :

```text
10 % 3 = 1
```

Autre exemple :

```cpp
20 % 5 = 0
```

Parce que 20 est divisible par 5.

---

# 2️⃣ Exemple simple

```cpp
#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 3;

    cout << "Addition : " << a + b << endl;
    cout << "Soustraction : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    cout << "Division : " << a / b << endl;
    cout << "Modulo : " << a % b << endl;

    return 0;
}
```

### Résultat

```text
Addition : 13
Soustraction : 7
Multiplication : 30
Division : 3
Modulo : 1
```

⚠️ Ici :

```cpp
10 / 3
```

donne `3` et non `3.333...` parce que `a` et `b` sont des **int**.

Avec `double` :

```cpp
double a = 10;
double b = 3;

cout << a / b;
```

on obtient environ :

```text
3.33333
```

---

# 3️⃣ Assignment operators

Il existe aussi des opérateurs qui permettent de **modifier une variable**.

### `=`

```cpp
int age = 23;
```

➡️ donne `23` à `age`.

### `+=`

```cpp
age += 2;
```

équivaut à :

```cpp
age = age + 2;
```

### `-=`

```cpp
age -= 2;
```

équivaut à :

```cpp
age = age - 2;
```

### `*=`

```cpp
age *= 2;
```

équivaut à :

```cpp
age = age * 2;
```

### `/=`

```cpp
age /= 2;
```

équivaut à :

```cpp
age = age / 2;
```

### `%=`

```cpp
age %= 2;
```

équivaut à :

```cpp
age = age % 2;
```

---

# 4️⃣ Increment et Decrement

### `++`

Augmente la valeur de **1**.

```cpp
int x = 5;

x++;
```

Maintenant :

```text
x = 6
```

### `--`

Diminue la valeur de **1**.

```cpp
x--;
```

Maintenant :

```text
x = 5
```

---

# ⭐ À retenir

Les principaux **Arithmetic Operators** sont :

```text
+   Addition
-   Soustraction
*   Multiplication
/   Division
%   Reste de division (Modulo)
```

Et pour modifier une variable :

```text
+=
-=
*=
/=
%=
++
--
```

### 🧠 Exemple à retenir

```cpp
int a = 10;
int b = 3;

cout << a + b;  // 13
cout << a - b;  // 7
cout << a * b;  // 30
cout << a / b;  // 3
cout << a % b;  // 1
```

**`%` = reste de la division** → très important pour les exercices d'algorithmes.
