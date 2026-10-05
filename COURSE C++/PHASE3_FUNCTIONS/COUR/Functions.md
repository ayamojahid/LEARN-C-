# Functions en C++

## 1. Qu'est-ce qu'une Function ?

Une **function** est un bloc de code qui réalise une tâche précise.

Au lieu d'écrire le même code plusieurs fois, on crée une fonction et on l'appelle quand on en a besoin.

### Exemple simple

```cpp
void sayHello()
{
    cout << "Hello" << endl;
}
```

Puis on appelle la fonction :

```cpp
sayHello();
```

Résultat :

```text
Hello
```

---

# 2. Pourquoi utiliser des Functions ?

Les fonctions permettent de :

* organiser le programme
* éviter de répéter le même code
* rendre le code plus facile à comprendre
* réutiliser du code
* diviser un grand problème en petites tâches

Par exemple :

```text
main()
  ↓
calculer()
  ↓
afficher()
```

---

# 3. Structure d'une Function

Une fonction possède généralement :

```cpp
returnType functionName(parameters)
{
    // code
}
```

Exemple :

```cpp
int add(int a, int b)
{
    return a + b;
}
```

Les différentes parties :

```text
int       → return type
add       → function name
a, b      → parameters
return    → retourne une valeur
```

---

# 4. `void` Function

`void` signifie que la fonction **ne retourne aucune valeur**.

Exemple :

```cpp
void sayHello()
{
    cout << "Hello" << endl;
}
```

Appel :

```cpp
sayHello();
```

---

# 5. Function avec Parameters

Un **parameter** est une valeur reçue par la fonction.

Exemple :

```cpp
void greet(string name)
{
    cout << "Hello " << name << endl;
}
```

Appel :

```cpp
greet("Aya");
```

Résultat :

```text
Hello Aya
```

Ici :

```text
name → parameter
"Aya" → argument
```

### Différence

**Parameter** = variable définie dans la fonction.

```cpp
void greet(string name)
```

**Argument** = valeur envoyée à la fonction.

```cpp
greet("Aya");
```

---

# 6. Plusieurs Parameters

Une fonction peut avoir plusieurs paramètres.

```cpp
void showInfo(string name, int age)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
```

Appel :

```cpp
showInfo("Aya", 23);
```

---

# 7. Function avec Return

Une fonction peut **retourner une valeur**.

Exemple :

```cpp
int add(int a, int b)
{
    return a + b;
}
```

Appel :

```cpp
int result = add(10, 5);

cout << result;
```

Résultat :

```text
15
```

Ici :

```text
10 + 5
 ↓
15
 ↓
return
 ↓
result
```

---

# 8. `return`

`return` permet de retourner une valeur à l'endroit où la fonction a été appelée.

Exemple :

```cpp
int square(int number)
{
    return number * number;
}
```

Puis :

```cpp
int result = square(5);
```

La fonction fait :

```text
5 × 5
 ↓
25
```

Donc :

```text
result = 25
```

---

# 9. Function sans Parameter

Une fonction peut ne recevoir aucune valeur.

```cpp
void message()
{
    cout << "Welcome!" << endl;
}
```

Appel :

```cpp
message();
```

---

# 10. Function avec Parameter mais sans Return

```cpp
void printNumber(int number)
{
    cout << number << endl;
}
```

Appel :

```cpp
printNumber(10);
```

La fonction affiche simplement la valeur.

---

# 11. Function sans Parameter avec Return

```cpp
int getNumber()
{
    return 100;
}
```

Puis :

```cpp
int number = getNumber();

cout << number;
```

Résultat :

```text
100
```

---

# 12. Les 4 cas importants

| Parameter | Return | Exemple                 |
| --------- | ------ | ----------------------- |
| ❌         | ❌      | `void hello()`          |
| ✅         | ❌      | `void print(int x)`     |
| ❌         | ✅      | `int getNumber()`       |
| ✅         | ✅      | `int add(int a, int b)` |

---

# 13. Function Declaration / Prototype

On peut déclarer une fonction avant `main()` et l'écrire après.

```cpp
#include <iostream>
using namespace std;

int add(int a, int b); // declaration

int main()
{
    cout << add(10, 5);

    return 0;
}

int add(int a, int b) // definition
{
    return a + b;
}
```

### Pourquoi ?

Parce que C++ doit connaître la fonction avant qu'on l'utilise dans `main()`.

---

# 14. Function Definition

La **definition** contient le vrai code de la fonction.

```cpp
int add(int a, int b)
{
    return a + b;
}
```

---

# 15. Function Call

Le **function call** est l'utilisation de la fonction.

```cpp
add(10, 5);
```

On appelle la fonction `add`.

---

# 16. Exemple complet

```cpp
#include <iostream>
#include <string>
using namespace std;

void sayHello()
{
    cout << "Hello!" << endl;
}

void showName(string name)
{
    cout << "Name: " << name << endl;
}

int add(int a, int b)
{
    return a + b;
}

int square(int number)
{
    return number * number;
}

int main()
{
    sayHello();

    showName("Aya");

    int result = add(10, 5);
    cout << "Addition: " << result << endl;

    int result2 = square(4);
    cout << "Square: " << result2 << endl;

    return 0;
}
```

Résultat :

```text
Hello!
Name: Aya
Addition: 15
Square: 16
```

---

# ⭐ Résumé

### Function

```cpp
returnType name(parameters)
{
    // code
}
```

### Sans return

```cpp
void hello()
{
    cout << "Hello";
}
```

### Avec parameter

```cpp
void hello(string name)
{
    cout << name;
}
```

### Avec return

```cpp
int add(int a, int b)
{
    return a + b;
}
```

### Appeler une function

```cpp
hello();
```

ou :

```cpp
add(10, 5);
```

### 🧠 Les mots importants

* **Function** → bloc de code pour une tâche
* **Parameter** → variable reçue par la fonction
* **Argument** → valeur envoyée
* **Return type** → type de valeur retournée
* **return** → renvoie une valeur
* **Function call** → appel de la fonction
* **void** → aucune valeur retournée
* **Declaration/Prototype** → annonce de la fonction
* **Definition** → code de la fonction
