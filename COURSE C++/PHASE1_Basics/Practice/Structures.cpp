
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

    // Création d'un Student
    Student student1;

    // Donner des valeurs
    student1.name = "Aya";
    student1.age = 23;
    student1.grade = 15.5;

    // Afficher les valeurs
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}


/*

### Résultat

```text
Name: Aya
Age: 23
Grade: 15.5
```

### 🧠 La logique

```text
struct Student
      ↓
name + age + grade
      ↓
Student student1
      ↓
student1.name
student1.age
student1.grade
```

Le `.` permet d'accéder à une donnée de la structure :

```cpp
student1.name
student1.age
student1.grade
```

**À retenir :**

```cpp
Student student1;
```

➡️ crée un étudiant.

```cpp
student1.age = 23;
```

➡️ donne `23` à son âge.

```cpp
cout << student1.age;
```

➡️ affiche son âge.
*/