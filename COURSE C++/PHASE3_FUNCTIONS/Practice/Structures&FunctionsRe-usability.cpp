
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
};

void displayStudent(Student student)
{
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
}

int main()
{
    Student student1;
    student1.name = "Aya";
    student1.age = 23;

    Student student2;
    student2.name = "Sara";
    student2.age = 22;

    displayStudent(student1);
    displayStudent(student2);

    return 0;
}



// ### Résultat

// ```text
// Name: Aya
// Age: 23

// Name: Sara
// Age: 22
// ```

// ### Où est la réutilisation ?

// On écrit la fonction **une seule fois** :

// ```cpp


void displayStudent(Student student)
{
    cout << student.name << endl;
    cout << student.age << endl;
}




// ```

// Puis on la réutilise :

// ```cpp
// displayStudent(student1);
// displayStudent(student2);
// ```

// Donc :

// ```text
// Student 1 ──┐
//             ├──> displayStudent()
// Student 2 ──┘
// ```

// 👉 La **structure** contient les données.

// 👉 La **fonction** travaille sur ces données.

// 👉 **Re-usability** = la même fonction peut travailler avec plusieurs objets.

// Par exemple, si on ajoute :

// ```cpp
// Student student3;
// student3.name = "Omar";
// student3.age = 24;

// displayStudent(student3);
// ```

// On n'a pas besoin de créer une nouvelle fonction. C'est ça la **réutilisabilité**.
