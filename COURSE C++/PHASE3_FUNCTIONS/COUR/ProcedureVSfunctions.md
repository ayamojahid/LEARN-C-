# Functions vs Procedures

## 1. Function

Une **Function** est un bloc de code qui réalise une tâche et **retourne une valeur**.

### Exemple en C++

```cpp
int add(int a, int b)
{
    return a + b;
}
```

Ici :

* `int` → la fonction retourne un `int`
* `add` → nom de la fonction
* `a` et `b` → paramètres
* `return a + b` → valeur retournée

On peut récupérer le résultat :

```cpp
int result = add(10, 5);

cout << result;
```

Résultat :

```text
15
```

### Schéma

```text
Function
   ↓
fait un travail
   ↓
retourne une valeur
```

---

# 2. Procedure

Une **Procedure** est un bloc de code qui réalise une tâche mais **ne retourne pas de valeur**.

En C++, on utilise généralement `void`.

### Exemple

```cpp
void sayHello()
{
    cout << "Hello Aya";
}
```

On appelle simplement la procédure :

```cpp
sayHello();
```

Résultat :

```text
Hello Aya
```

Il n'y a pas de valeur à récupérer.

### Schéma

```text
Procedure
   ↓
fait un travail
   ↓
ne retourne pas de valeur
```

---

# 3. Différence principale

| Function                               | Procedure                         |
| -------------------------------------- | --------------------------------- |
| Retourne une valeur                    | Ne retourne pas de valeur         |
| Utilise un type de retour              | Utilise `void` en C++             |
| Peut être utilisée dans une expression | Appelée pour effectuer une action |
| Exemple : calculer une somme           | Exemple : afficher un message     |

### Function

```cpp
int multiply(int a, int b)
{
    return a * b;
}
```

```cpp
int result = multiply(4, 5);
```

➡️ `result` reçoit `20`.

### Procedure

```cpp
void showMessage()
{
    cout << "Hello";
}
```

```cpp
showMessage();
```

➡️ Elle effectue l'action d'affichage.

---

# 4. Attention en C++

En **algorithmique**, on distingue souvent :

* **Function** → retourne une valeur
* **Procedure** → ne retourne pas de valeur

En **C++**, il n'existe pas un mot-clé `procedure`.

Pour faire une procédure, on utilise :

```cpp
void
```

Donc :

```cpp
int add()
```

➡️ Function

et

```cpp
void display()
```

➡️ Procedure

---

# 5. Exemple complet

```cpp
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

void display()
{
    cout << "Hello Aya" << endl;
}

int main()
{
    display();

    int result = add(10, 5);

    cout << "Result: " << result << endl;

    return 0;
}
```

### Ce qui se passe :

```text
main()
  |
  |----> display()
  |        |
  |        └── affiche "Hello Aya"
  |
  |----> add(10, 5)
           |
           └── retourne 15
                  |
                  ↓
               result
```

## 🧠 À retenir

**Function = fait quelque chose + retourne une valeur**

**Procedure = fait quelque chose + ne retourne pas de valeur**

En C++ :

```cpp
int add()       // Function
```

```cpp
void display()  // Procedure
```
