# 📚 Arrays with Functions

## 1. Pourquoi utiliser un Array avec une Function ?

On a vu :

* **Array** → permet de stocker plusieurs valeurs.
* **Function** → permet de réutiliser un bloc de code.

On peut donc **envoyer un Array à une Function** pour que la fonction travaille dessus.

Par exemple, au lieu de faire tout dans `main()` :

```cpp
int numbers[5] = {10, 20, 30, 40, 50};

for (int i = 0; i < 5; i++)
{
    cout << numbers[i] << endl;
}
```

On peut créer une fonction :

```cpp
void PrintArray(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}
```

Puis dans `main()` :

```cpp
PrintArray(numbers, 5);
```

👉 La fonction reçoit le tableau et travaille avec lui.

---

# 2. Comment envoyer un Array à une Function ?

La forme générale est :

```cpp
void FunctionName(int array[], int size)
{
    // travail avec le tableau
}
```

Puis :

```cpp
FunctionName(array, size);
```

Exemple :

```cpp
int numbers[5] = {10, 20, 30, 40, 50};

PrintArray(numbers, 5);
```

### Important

On envoie :

```cpp
numbers
```

et non :

```cpp
numbers[0]
```

Parce que `numbers` représente **le tableau**.

---

# 3. Pourquoi envoyer `size` ?

La fonction doit savoir combien d'éléments elle doit parcourir.

Exemple :

```cpp
void PrintArray(int numbers[], int size)
```

Ici :

```text
numbers → le tableau
size    → nombre d'éléments
```

Puis :

```cpp
for (int i = 0; i < size; i++)
```

La fonction peut donc fonctionner avec différentes tailles.

---

# 4. Exemple complet

```cpp
#include <iostream>
using namespace std;

void PrintArray(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    PrintArray(numbers, 5);

    return 0;
}
```

### Résultat

```text
10
20
30
40
50
```

---

# 5. Pourquoi c'est utile ?

Imagine que tu as plusieurs tableaux :

```cpp
int numbers[5] = {10, 20, 30, 40, 50};
int ages[3] = {20, 25, 30};
int grades[4] = {12, 15, 18, 14};
```

Tu peux utiliser **la même fonction** :

```cpp
PrintArray(numbers, 5);
PrintArray(ages, 3);
PrintArray(grades, 4);
```

👉 C'est la **reusability** :

**Une seule fonction → plusieurs tableaux.**

---

# 6. Function pour calculer la somme

On peut demander à une fonction de calculer la somme.

```cpp
int SumArray(int numbers[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + numbers[i];
    }

    return sum;
}
```

Dans `main()` :

```cpp
int numbers[5] = {10, 20, 30, 40, 50};

int result = SumArray(numbers, 5);

cout << result;
```

Résultat :

```text
150
```

### Ici :

```text
Array → numbers
Function → SumArray()
Return → somme
```

---

# 7. Function pour trouver le maximum

On peut aussi créer une fonction qui cherche le plus grand nombre.

```cpp
int MaxNumber(int numbers[], int size)
{
    int max = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    return max;
}
```

Puis :

```cpp
int numbers[5] = {10, 50, 20, 80, 30};

cout << MaxNumber(numbers, 5);
```

Résultat :

```text
80
```

---

# 8. Modifier un Array dans une Function

C'est très important.

Une fonction peut aussi **modifier les éléments du tableau**.

Exemple :

```cpp
void ChangeFirstElement(int numbers[])
{
    numbers[0] = 100;
}
```

Dans `main()` :

```cpp
int numbers[3] = {10, 20, 30};

ChangeFirstElement(numbers);

cout << numbers[0];
```

Résultat :

```text
100
```

Avant :

```text
10  20  30
```

Après :

```text
100  20  30
```

👉 La modification est visible dans `main()`.

---

# 9. Pourquoi la modification fonctionne ?

Avec un Array classique en C++, quand on le passe à une fonction, la fonction travaille sur le **même tableau en mémoire**, plutôt que de recevoir une copie complète du tableau.

Donc :

```cpp
numbers[0] = 100;
```

modifie réellement le premier élément du tableau original.

---

# 10. Array + Function + Structure

On peut également combiner les concepts que tu as déjà appris.

Par exemple :

```cpp
struct Student
{
    string name;
    int age;
};
```

On peut créer un Array de `Student` :

```cpp
Student students[3];
```

Et envoyer ce tableau à une fonction :

```cpp
void PrintStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << students[i].name << endl;
        cout << students[i].age << endl;
    }
}
```

👉 Ici, on combine :

**Structure + Array + Function + Loop**

C'est une étape importante parce que plusieurs concepts commencent à travailler ensemble.

---

# 11. La logique à retenir

Quand tu vois :

```cpp
void PrintArray(int numbers[], int size)
```

pense :

```text
numbers → le tableau
size    → combien d'éléments
```

Puis :

```cpp
for (int i = 0; i < size; i++)
```

pense :

```text
i = 0
↓
premier élément
↓
i++
↓
élément suivant
↓
...
↓
dernier élément
```

---

# ⭐ Résumé

### Array

```cpp
int numbers[5] = {10, 20, 30, 40, 50};
```

### Function

```cpp
void PrintArray(int numbers[], int size)
```

### Appel

```cpp
PrintArray(numbers, 5);
```

### Parcourir

```cpp
for (int i = 0; i < size; i++)
```

### Accéder à un élément

```cpp
numbers[i]
```

### Function qui retourne une valeur

```cpp
int SumArray(int numbers[], int size)
```

### Appeler et récupérer le résultat

```cpp
int result = SumArray(numbers, 5);
```

---

## 🧠 La phrase à mémoriser

> **Je peux envoyer un Array à une Function pour éviter de répéter le même code et réutiliser la fonction avec plusieurs tableaux.**
