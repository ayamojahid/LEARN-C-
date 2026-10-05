# Assignment Operators

Les **Assignment Operators** servent à **donner une valeur à une variable** ou à **modifier sa valeur**.

Le principal opérateur est :

```cpp
=
```

---

## 1. `=` Assignment

`=` signifie **affecter une valeur**.

```cpp
int x = 10;
```

Cela signifie :

> mettre `10` dans la variable `x`.

On peut aussi faire :

```cpp
x = 20;
```

Maintenant :

```text
x = 20
```

---

## 2. `+=`

```cpp
x += 5;
```

C'est la même chose que :

```cpp
x = x + 5;
```

### Exemple

```cpp
int x = 10;

x += 5;

cout << x;
```

Résultat :

```text
15
```

---

## 3. `-=`

```cpp
x -= 3;
```

C'est la même chose que :

```cpp
x = x - 3;
```

### Exemple

```cpp
int x = 10;

x -= 3;

cout << x;
```

Résultat :

```text
7
```

---

## 4. `*=`

```cpp
x *= 2;
```

C'est la même chose que :

```cpp
x = x * 2;
```

### Exemple

```cpp
int x = 10;

x *= 2;

cout << x;
```

Résultat :

```text
20
```

---

## 5. `/=`

```cpp
x /= 2;
```

C'est la même chose que :

```cpp
x = x / 2;
```

### Exemple

```cpp
int x = 10;

x /= 2;

cout << x;
```

Résultat :

```text
5
```

---

## 6. `%=`

```cpp
x %= 3;
```

C'est la même chose que :

```cpp
x = x % 3;
```

`%` donne le **reste de la division**.

### Exemple

```cpp
int x = 10;

x %= 3;

cout << x;
```

Résultat :

```text
1
```

Parce que :

```text
10 ÷ 3 = 3 reste 1
```

---

# Tableau résumé

| Operator | Exemple  | Équivalent    |
| -------- | -------- | ------------- |
| `=`      | `x = 10` | donner 10 à x |
| `+=`     | `x += 5` | `x = x + 5`   |
| `-=`     | `x -= 5` | `x = x - 5`   |
| `*=`     | `x *= 5` | `x = x * 5`   |
| `/=`     | `x /= 5` | `x = x / 5`   |
| `%=`     | `x %= 5` | `x = x % 5`   |

### 🧠 Astuce simple

Les opérateurs `+=`, `-=`, `*=`, `/=`, `%=` veulent dire :

> **prendre la valeur actuelle et faire une opération avec elle.**

Par exemple :

```cpp
x += 2;
```

➡️ **x actuel + 2**

```cpp
x -= 2;
```

➡️ **x actuel - 2**

```cpp
x *= 2;
```

➡️ **x actuel × 2**
