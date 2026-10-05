# Structures en C++

Une **structure (`struct`)** permet de **regrouper plusieurs informations différentes dans un seul élément**.

Par exemple, pour représenter un étudiant, on peut avoir :

```text
Nom
Age
Note
```

Au lieu de créer des variables séparées, on peut les regrouper dans une structure `Student`.

---

## 1. Créer une structure

On utilise le mot-clé :

```cpp
struct
```

Exemple :

```cpp
struct Student {
    string name;
    int age;
    double grade;
};
```

Ici, `Student` est le **nom de la structure**.

Elle contient 3 membres :

```text
name  → string
age   → int
grade → double
```

---

## 2. Créer une variable de type structure

Après avoir créé la structure, on peut créer un étudiant :

```cpp
Student student1;
```

Maintenant `student1` possède :

```text
student1.name
student1.age
student1.grade
```

---

## 3. Donner des valeurs

On utilise le point `.` pour accéder aux membres.

```cpp
student1.name = "Aya";
student1.age = 23;
student1.grade = 15.5;
```

Le `.` signifie :

> accéder à une information qui appartient à la structure.

---

## 4. Afficher les informations

```cpp
cout << student1.name << endl;
cout << student1.age << endl;
cout << student1.grade << endl;
```

Résultat :

```text
Aya
23
15.5
```

---

# 5. Exemple complet

```cpp
#include <iostream>
#include <string>

using namespace std;

// Création de la structure
struct Student {

    string name;
    int age;
    double grade;

};

int main() {

    // Création d'un étudiant
    Student student1;

    // Donner des valeurs
    student1.name = "Aya";
    student1.age = 23;
    student1.grade = 15.5;

    // Afficher les informations
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}
```

---

# 6. Plusieurs structures

On peut créer plusieurs variables avec la même structure.

```cpp
Student student1;
Student student2;
Student student3;
```

Puis :

```cpp
student1.name = "Aya";
student1.age = 23;

student2.name = "Sara";
student2.age = 22;

student3.name = "Amine";
student3.age = 24;
```

Chaque variable possède **ses propres données**.

---

# 7. Initialiser directement

On peut aussi donner les valeurs directement :

```cpp
Student student1 = {"Aya", 23, 15.5};
```

Cela signifie :

```text
name  = "Aya"
age   = 23
grade = 15.5
```

L'ordre doit correspondre à l'ordre des membres dans la structure.

---

# 8. Structure avec plusieurs types

C'est justement l'intérêt d'une `struct`.

```cpp
struct Product {

    string name;
    int quantity;
    double price;
    bool available;

};
```

Une seule structure peut contenir :

```text
string
int
double
bool
```

---

# 🧠 À retenir

### Structure

```cpp
struct Student {
    string name;
    int age;
    double grade;
};
```

### Créer une variable

```cpp
Student student1;
```

### Modifier une donnée

```cpp
student1.age = 23;
```

### Lire une donnée

```cpp
cout << student1.age;
```

### Le `.`

```cpp
student1.age
```

➡️ signifie **accéder à `age` de `student1`**.

### Idée principale

> **Une `struct` est un regroupement de plusieurs variables liées, qui peuvent avoir des types différents.**

Par exemple :

```text
Student
│
├── name  → string
├── age   → int
└── grade → double
```

C'est très utile pour représenter des éléments réels comme **Student, Product, Car, Employee, Ticket, Airport**, etc.
