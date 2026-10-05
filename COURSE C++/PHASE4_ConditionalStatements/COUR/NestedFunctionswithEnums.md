# 🔹 C++ — Nested Functions with Enums

## 1. D'abord : qu'est-ce qu'un `enum` ?

Un `enum` permet de créer un type avec des **valeurs nommées**.

```cpp
enum class Color
{
    Red,
    Green,
    Blue
};
```

On peut ensuite créer une variable :

```cpp
Color color = Color::Red;
```

L'avantage est la **lisibilité**.

Au lieu de voir :

```text
0
```

on voit :

```text
Color::Red
```

➡️ On comprend directement ce que représente la valeur.

---

# 2. Qu'est-ce qu'une fonction ?

Une fonction est un bloc de code qui réalise une tâche précise.

Exemple :

```cpp
void PrintHello()
{
    cout << "Hello";
}
```

On peut appeler la fonction :

```cpp
PrintHello();
```

---

# 3. Que signifie "Nested" ici ?

Dans ce contexte, on parle généralement de **combiner des fonctions avec des `enum`**.

⚠️ En C++, on ne définit normalement pas une fonction à l'intérieur d'une autre fonction.

On fait plutôt :

```text
enum
  ↓
fonction qui utilise l'enum
  ↓
main()
```

Par exemple :

```cpp
enum class Color
{
    Red,
    Green,
    Blue
};

void PrintColor(Color color)
{
    ...
}

int main()
{
    ...
}
```

---

# 4. Exemple simple

```cpp
#include <iostream>
using namespace std;

enum class Color
{
    Red,
    Green,
    Blue
};

void PrintColor(Color color)
{
    switch (color)
    {
        case Color::Red:
            cout << "Red";
            break;

        case Color::Green:
            cout << "Green";
            break;

        case Color::Blue:
            cout << "Blue";
            break;
    }
}

int main()
{
    Color myColor = Color::Red;

    PrintColor(myColor);

    return 0;
}
```

### Résultat

```text
Red
```

---

# 5. Comprendre la logique

Regardons le programme étape par étape.

### Étape 1 — On crée l'`enum`

```cpp
enum class Color
{
    Red,
    Green,
    Blue
};
```

On dit :

> Le type `Color` peut avoir trois valeurs : `Red`, `Green` ou `Blue`.

---

### Étape 2 — On crée une fonction

```cpp
void PrintColor(Color color)
```

La fonction reçoit une variable de type `Color`.

Donc elle peut recevoir :

```cpp
Color::Red
```

ou :

```cpp
Color::Green
```

ou :

```cpp
Color::Blue
```

---

### Étape 3 — On utilise `switch`

```cpp
switch (color)
```

On regarde quelle valeur contient `color`.

Puis :

```cpp
case Color::Red:
```

signifie :

> Si `color` est `Red`.

---

### Étape 4 — Dans `main`

```cpp
Color myColor = Color::Red;
```

On crée une variable `myColor`.

Elle contient :

```text
Color::Red
```

Puis :

```cpp
PrintColor(myColor);
```

On envoie `myColor` à la fonction.

---

# 6. Exemple avec `enum` + plusieurs fonctions

On peut avoir plusieurs fonctions qui travaillent avec le même `enum`.

```cpp
#include <iostream>
using namespace std;

enum class Day
{
    Monday,
    Tuesday,
    Wednesday
};

void PrintDay(Day day)
{
    switch (day)
    {
        case Day::Monday:
            cout << "Monday" << endl;
            break;

        case Day::Tuesday:
            cout << "Tuesday" << endl;
            break;

        case Day::Wednesday:
            cout << "Wednesday" << endl;
            break;
    }
}

bool IsWeekend(Day day)
{
    return false;
}

int main()
{
    Day today = Day::Monday;

    PrintDay(today);

    cout << IsWeekend(today);

    return 0;
}
```

Ici :

```text
Day
 ↓
 ├── PrintDay()
 │
 └── IsWeekend()
```

Les deux fonctions utilisent le même type `Day`.

---

# 7. Pourquoi utiliser `enum` avec des fonctions ?

C'est très utile pour rendre le programme **plus organisé et plus lisible**.

Par exemple, sans `enum` :

```cpp
void PrintColor(int color)
```

On ne sait pas immédiatement ce que signifie :

```cpp
PrintColor(0);
```

Mais avec `enum` :

```cpp
void PrintColor(Color color)
```

on peut écrire :

```cpp
PrintColor(Color::Red);
```

C'est beaucoup plus clair.

---

# 8. Exemple réel : Gender

On peut créer :

```cpp
enum class Gender
{
    Male,
    Female
};
```

Puis une fonction :

```cpp
void PrintGender(Gender gender)
{
    switch (gender)
    {
        case Gender::Male:
            cout << "Male";
            break;

        case Gender::Female:
            cout << "Female";
            break;
    }
}
```

Et dans `main` :

```cpp
Gender personGender = Gender::Female;

PrintGender(personGender);
```

Résultat :

```text
Female
```

---

# 9. Exemple avec Structure + Enum + Function

C'est une combinaison très importante.

```cpp
#include <iostream>
#include <string>
using namespace std;

enum class Gender
{
    Male,
    Female
};

struct Person
{
    string name;
    Gender gender;
};

void PrintPerson(Person person)
{
    cout << "Name: " << person.name << endl;

    switch (person.gender)
    {
        case Gender::Male:
            cout << "Gender: Male";
            break;

        case Gender::Female:
            cout << "Gender: Female";
            break;
    }
}

int main()
{
    Person person1;

    person1.name = "Aya";
    person1.gender = Gender::Female;

    PrintPerson(person1);

    return 0;
}
```

### Résultat

```text
Name: Aya
Gender: Female
```

---

# ⭐ La logique importante

Ici, plusieurs concepts travaillent ensemble :

```text
ENUM
  ↓
donne des valeurs nommées
  ↓
STRUCT
  ↓
regroupe les informations
  ↓
FUNCTION
  ↓
traite les informations
  ↓
SWITCH
  ↓
choisit l'action selon l'ENUM
```

Par exemple :

```text
Person
 ├── name = "Aya"
 └── gender = Gender::Female
                  ↓
             PrintPerson()
                  ↓
             switch(gender)
                  ↓
        case Gender::Female
                  ↓
              "Female"
```

---

# 🧠 À retenir

### `enum`

Crée des **valeurs nommées** :

```cpp
Color::Red
Color::Green
Color::Blue
```

### Fonction

Réalise une tâche :

```cpp
void PrintColor(Color color)
```

### `switch`

Permet de choisir selon la valeur de l'`enum` :

```cpp
case Color::Red:
```

### Structure + Enum + Function

Permet de créer des programmes plus organisés :

```text
struct → stocker les données

enum → représenter les choix possibles

function → traiter les données

switch → choisir selon l'enum
```

👉 Le point essentiel : **une fonction peut recevoir un `enum` comme paramètre et utiliser `switch` pour traiter chacune de ses valeurs.**
