# Structures and Functions — Re-usability

## 1. L'idée principale

On peut utiliser une **structure (`struct`) avec des fonctions**.

Cela permet de créer des fonctions qui travaillent sur les données d'une structure.

👉 **Re-usability** = **réutilisabilité**.

Cela signifie :

> On écrit une fonction **une seule fois**, puis on peut l'utiliser plusieurs fois avec différents objets.

---

# 2. Exemple simple

On crée une structure `Student` :

```cpp
struct Student
{
    string name;
    int age;
    double grade;
};
```

Puis une fonction qui affiche un étudiant :

```cpp
void printStudent(Student student)
{
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Grade: " << student.grade << endl;
}
```

On peut maintenant créer plusieurs étudiants :

```cpp
Student student1;
Student student2;
```

Et utiliser **la même fonction** :

```cpp
printStudent(student1);
printStudent(student2);
```

---

# 3. Exemple complet

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    double grade;
};

void printStudent(Student student)
{
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Grade: " << student.grade << endl;
}

int main()
{
    Student student1;

    student1.name = "Aya";
    student1.age = 23;
    student1.grade = 15.5;

    Student student2;

    student2.name = "Sara";
    student2.age = 22;
    student2.grade = 17.0;

    printStudent(student1);

    cout << endl;

    printStudent(student2);

    return 0;
}
```

### Résultat

```text
Name: Aya
Age: 23
Grade: 15.5

Name: Sara
Age: 22
Grade: 17
```

---

# 4. Où est la réutilisabilité ?

On a écrit cette fonction **une seule fois** :

```cpp
void printStudent(Student student)
{
    cout << student.name << endl;
    cout << student.age << endl;
    cout << student.grade << endl;
}
```

Mais on peut l'utiliser plusieurs fois :

```cpp
printStudent(student1);
printStudent(student2);
```

Et même :

```cpp
Student student3;

student3.name = "Omar";
student3.age = 24;
student3.grade = 14;

printStudent(student3);
```

👉 On ne réécrit pas le code d'affichage.

C'est ça **Re-usability**.

---

# 5. Structure + Function avec By Reference

On peut aussi envoyer la structure **By Reference**.

```cpp
void changeGrade(Student &student)
{
    student.grade = 18;
}
```

Puis :

```cpp
changeGrade(student1);
```

La note de `student1` devient :

```text
18
```

Pourquoi ?

Parce que :

```cpp
Student &student
```

permet à la fonction de travailler directement sur l'objet original.

---

# 6. Exemple avec plusieurs fonctions

Une structure peut être utilisée avec plusieurs fonctions :

```cpp
struct Product
{
    string name;
    double price;
    int quantity;
};
```

Fonction pour afficher :

```cpp
void displayProduct(Product product)
{
    cout << product.name << endl;
    cout << product.price << endl;
    cout << product.quantity << endl;
}
```

Fonction pour changer le prix :

```cpp
void changePrice(Product &product)
{
    product.price = 100;
}
```

On peut donc faire :

```cpp
Product product1;

product1.name = "Laptop";
product1.price = 500;
product1.quantity = 2;

displayProduct(product1);

changePrice(product1);

displayProduct(product1);
```

La même structure et les mêmes fonctions peuvent être utilisées pour plusieurs produits.

---

# 🧠 À retenir

### Structure

Permet de **regrouper plusieurs données** :

```cpp
struct Student
{
    string name;
    int age;
    double grade;
};
```

### Function

Permet de **regrouper une tâche** :

```cpp
void printStudent(Student student)
{
    // ...
}
```

### Re-usability

Permet de **réutiliser la même fonction plusieurs fois** :

```cpp
printStudent(student1);
printStudent(student2);
printStudent(student3);
```

### Schéma

```text
             Structure
                ↓
        ┌─────────────────┐
        │ Student         │
        │ name            │
        │ age             │
        │ grade           │
        └─────────────────┘
                ↓
             Function
                ↓
        printStudent()
                ↓
       ┌────────┼────────┐
       ↓        ↓        ↓
   student1  student2  student3
```

⭐ **Structure = données**

⭐ **Function = traitement**

⭐ **Re-usability = réutiliser le même code plusieurs fois**
