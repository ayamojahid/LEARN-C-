## 🟦 La syntaxe en C++

**La syntaxe**, c’est l’ensemble des **règles d’écriture** qu’on doit respecter pour que le compilateur puisse comprendre notre programme.

Comme une langue humaine a des règles de grammaire, **C++ a des règles de syntaxe**.

### Exemple simple

```cpp
#include <iostream>

int main() {
    std::cout << "Hello World";
    return 0;
}
```

Voyons chaque partie simplement 👇

### 1️⃣ `#include <iostream>`

```cpp
#include <iostream>
```

Cela permet d'utiliser les fonctionnalités d'**entrée/sortie**, comme afficher du texte avec `cout`.

---

### 2️⃣ `int main()`

```cpp
int main()
```

`main()` est le **point de départ du programme**.

Quand on exécute le programme, l'exécution commence généralement dans `main()`.

`int` signifie que la fonction `main` retourne un **nombre entier**.

---

### 3️⃣ `{ }` — Les accolades

```cpp
int main() {
    // instructions
}
```

Les `{ }` délimitent un **bloc de code**.

Ici, elles indiquent le contenu de la fonction `main`.

---

### 4️⃣ `std::cout`

```cpp
std::cout << "Hello World";
```

`cout` permet **d'afficher des informations à l'écran**.

```text
std::cout → afficher
<<        → envoyer vers l'écran
"Hello"   → texte à afficher
```

---

### 5️⃣ `;` — Le point-virgule

```cpp
std::cout << "Hello World";
return 0;
```

En C++, beaucoup d'instructions se terminent par **`;`**.

⚠️ Oublier `;` peut provoquer une **erreur de compilation**.

---

### 6️⃣ `return 0;`

```cpp
return 0;
```

Cela indique que la fonction `main()` se termine normalement.

---

## 📝 Les règles importantes de syntaxe

### 🔹 C++ est sensible aux majuscules/minuscules

```cpp
int age;
```

n'est pas la même chose que :

```cpp
int Age;
```

Et :

```cpp
cout
```

n'est pas la même chose que :

```cpp
Cout
```

### 🔹 Les commentaires

Pour une ligne :

```cpp
// Ceci est un commentaire
```

Pour plusieurs lignes :

```cpp
/*
   Ceci est
   un commentaire
*/
```

Les commentaires sont ignorés par le compilateur.

---

## 🧠 À retenir

> **Syntax = the rules for writing C++ code correctly.**

Les éléments essentiels au début sont :

**`main()` → point de départ**
**`{ }` → bloc de code**
**`;` → fin d'une instruction**
**`//` → commentaire**
**`cout` → afficher**
**`return` → retourner une valeur**

Et surtout :

**Syntaxe ≠ logique**

La **syntaxe** explique *comment écrire correctement le code*, tandis que la **logique** explique *comment résoudre le problème*.
