# Increment & Decrement Operators: `++`, `--`

Les opérateurs **Increment** et **Decrement** servent à **modifier une valeur de 1**.

---

## 1. Increment `++`

`++` signifie :

> **augmenter la valeur de 1**

### Exemple

```cpp
int x = 5;

x++;

cout << x;
```

Résultat :

```text
6
```

Car :

```text
x = 5
x++ → x = 6
```

C'est la même idée que :

```cpp
x = x + 1;
```

---

## 2. Decrement `--`

`--` signifie :

> **diminuer la valeur de 1**

### Exemple

```cpp
int x = 5;

x--;

cout << x;
```

Résultat :

```text
4
```

Car :

```text
x = 5
x-- → x = 4
```

C'est la même idée que :

```cpp
x = x - 1;
```

---

# 3. Les deux formes : Prefix et Postfix

Il existe **deux positions** possibles.

### Prefix

L'opérateur est **avant** la variable :

```cpp
++x;
--x;
```

### Postfix

L'opérateur est **après** la variable :

```cpp
x++;
x--;
```

---

## 4. Différence entre `++x` et `x++`

La différence devient importante lorsque `++` est utilisé **dans une expression**.

### `++x` → Prefix

La variable est d'abord augmentée, puis sa nouvelle valeur est utilisée.

```cpp
int x = 5;

cout << ++x;
```

Résultat :

```text
6
```

Étapes :

```text
x = 5
++x → x devient 6
cout → 6
```

---

### `x++` → Postfix

La valeur actuelle est d'abord utilisée, puis la variable augmente.

```cpp
int x = 5;

cout << x++;
```

Résultat :

```text
5
```

Après l'affichage :

```text
x devient 6
```

Donc :

```text
x = 5
cout << x++ → affiche 5
x devient 6
```

---

# 5. Même principe avec `--`

### Prefix `--x`

```cpp
int x = 5;

cout << --x;
```

Résultat :

```text
4
```

La valeur est d'abord diminuée.

---

### Postfix `x--`

```cpp
int x = 5;

cout << x--;
```

Résultat :

```text
5
```

Puis `x` devient :

```text
4
```

---

# 6. Tableau résumé

| Operator | Nom               | Action                |
| -------- | ----------------- | --------------------- |
| `++x`    | Prefix Increment  | augmente puis utilise |
| `x++`    | Postfix Increment | utilise puis augmente |
| `--x`    | Prefix Decrement  | diminue puis utilise  |
| `x--`    | Postfix Decrement | utilise puis diminue  |

### À retenir

```text
++  → +1
--  → -1
```

Et :

```text
Prefix  → modifier d'abord
Postfix → utiliser d'abord
```

---

## 7. Exemple complet

```cpp
#include <iostream>

using namespace std;

int main() {

    int a = 5;
    int b = 5;

    // Increment
    a++;
    cout << "a = " << a << endl;

    ++b;
    cout << "b = " << b << endl;


    // Decrement
    a--;
    cout << "a = " << a << endl;

    --b;
    cout << "b = " << b << endl;

    return 0;
}
```

Résultat :

```text
a = 6
b = 6
a = 5
b = 5
```

**Idée principale :** `++` et `--` sont très utilisés pour les **compteurs**, notamment dans les boucles.
