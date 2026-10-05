# 📚 Arrays of Structures

## 1. Qu'est-ce qu'un Array of Structures ?

On a déjà appris :

* **Structure** → regroupe plusieurs informations.
* **Array** → stocke plusieurs éléments.

On peut donc combiner les deux :

> **Array of Structures = un tableau qui contient plusieurs objets d'une même structure.**

---

## 2. Rappel : Structure

Par exemple, on crée une structure `Student` :

```cpp
struct Student
{
    string Name;
    int Age;
    double Grade;
};
```

Maintenant, on peut créer un étudiant :

```cpp
Student student1;
```

`student1` contient :

```text
Name
Age
Grade
```

---

# 3. Array of Structures

Au lieu de créer :

```cpp
Student student1;
Student student2;
Student student3;
```

On peut créer :

```cpp
Student students[3];
```

Cela signifie :

```text
students
   │
   ├── students[0]
   ├── students[1]
   └── students[2]
```

Chaque élément est un **Student**.

---

# 4. Donner des valeurs

On peut remplir directement le tableau :

```cpp
Student students[3] =
{
    {"Aya", 23, 15.5},
    {"Sara", 22, 17.0},
    {"Salma", 24, 14.5}
};
```

On a donc :

| Index | Name  | Age | Grade |
| ----- | ----- | --: | ----: |
| `0`   | Aya   |  23 |  15.5 |
| `1`   | Sara  |  22 |  17.0 |
| `2`   | Salma |  24 |  14.5 |

---

# 5. Accéder à un élément

Pour accéder au premier étudiant :

```cpp
students[0]
```

Pour accéder à son nom :

```cpp
students[0].Name
```

Pour accéder à son âge :

```cpp
students[0].Age
```

Pour accéder à sa note :

```cpp
students[0].Grade
```

### La logique

```text
students[0]          → premier Student
students[0].Name     → son Name
students[0].Age      → son Age
students[0].Grade    → son Grade
```

---

# 6. Exemple simple sans Function

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string Name;
    int Age;
    double Grade;
};

int main()
{
    Student students[3] =
    {
        {"Aya", 23, 15.5},
        {"Sara", 22, 17.0},
        {"Salma", 24, 14.5}
    };

    cout << students[0].Name << endl;
    cout << students[0].Age << endl;
    cout << students[0].Grade << endl;

    return 0;
}
```

Résultat :

```text
Aya
23
15.5
```

---

# 7. Modifier un élément

On peut modifier les données d'un étudiant :

```cpp
students[0].Grade = 18;
```

Avant :

```text
Aya → 15.5
```

Après :

```text
Aya → 18
```

On peut aussi modifier le nom :

```cpp
students[1].Name = "Sara Amine";
```

---

# 8. Ajouter une Function

Maintenant, on peut utiliser une fonction pour afficher un Student.

```cpp
void PrintStudent(Student student)
{
    cout << "Name: " << student.Name << endl;
    cout << "Age: " << student.Age << endl;
    cout << "Grade: " << student.Grade << endl;
}
```

Puis :

```cpp
PrintStudent(students[0]);
```

Cela envoie **un seul élément** du tableau à la fonction.

---

# 9. Function avec tout le Array

On peut aussi envoyer tout le tableau à une fonction :

```cpp
void PrintStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << students[i].Name << endl;
        cout << students[i].Age << endl;
        cout << students[i].Grade << endl;
    }
}
```

Puis :

```cpp
PrintStudents(students, 3);
```

### Ici :

```text
students → le Array
3        → nombre de Students
```

La fonction peut parcourir les étudiants.

---

# 10. Pourquoi c'est utile ?

Imagine une école avec 100 étudiants.

Sans Array :

```cpp
Student student1;
Student student2;
Student student3;
// ...
Student student100;
```

C'est très long.

Avec un Array :

```cpp
Student students[100];
```

On peut gérer les 100 étudiants dans une seule structure de données.

---

# 11. Array of Structures + Function

C'est ici que plusieurs concepts se combinent :

```text
STRUCTURE
    ↓
Student
    ↓
ARRAY
    ↓
students[3]
    ↓
FUNCTION
    ↓
PrintStudents()
```

Exemple :

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string Name;
    int Age;
    double Grade;
};

void PrintStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << students[i].Name << endl;
        cout << "Age: " << students[i].Age << endl;
        cout << "Grade: " << students[i].Grade << endl;
        cout << "----------------" << endl;
    }
}

int main()
{
    Student students[3] =
    {
        {"Aya", 23, 15.5},
        {"Sara", 22, 17.0},
        {"Salma", 24, 14.5}
    };

    PrintStudents(students, 3);

    return 0;
}
```

---

# 12. La notation importante

Avec un Array normal :

```cpp
numbers[0]
```

Avec une Structure :

```cpp
student.Name
```

Avec un Array of Structures :

```cpp
students[0].Name
```

👉 Il faut retenir cette combinaison :

**Array → `[index]`**

**Structure → `.member`**

Donc :

```cpp
students[0].Name
```

signifie :

> Le `Name` du premier Student.

---

# ⭐ À retenir

### Structure

```cpp
struct Student
{
    string Name;
    int Age;
    double Grade;
};
```

### Un objet

```cpp
Student student1;
```

### Plusieurs objets

```cpp
Student students[3];
```

### Initialiser

```cpp
Student students[3] =
{
    {"Aya", 23, 15.5},
    {"Sara", 22, 17.0},
    {"Salma", 24, 14.5}
};
```

### Accéder

```cpp
students[0].Name
students[1].Age
students[2].Grade
```

### Modifier

```cpp
students[0].Grade = 18;
```

### Envoyer à une Function

```cpp
PrintStudents(students, 3);
```

---

## 🧠 La logique à retenir

Quand tu vois :

```cpp
students[2].Grade
```

lis-le dans cet ordre :

**`students`** → mon Array
↓
**`[2]`** → le troisième élément
↓
**`.Grade`** → la propriété `Grade` de cet élément

Donc :

> **Array → index → membre de la Structure**

C'est la logique principale des **Arrays of Structures**.
