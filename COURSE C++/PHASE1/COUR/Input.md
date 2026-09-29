# 🟦 C++ — Input (Entrée des données)

## 1. C'est quoi l'Input ?

**Input** signifie **entrée**.

L'input permet à l'utilisateur de **donner des informations au programme**.

Par exemple, le programme peut demander :

* ton nom ;
* ton âge ;
* ton prix ;
* un nombre ;
* une réponse.

Le programme reçoit ensuite cette information et peut l'utiliser.

### 🧠 Idée simple

```text
Utilisateur
    ↓
  Input
    ↓
Programme
    ↓
Traitement
    ↓
Résultat
```

---

# 2. `cin` en C++

Pour récupérer une donnée entrée par l'utilisateur, on utilise généralement :

```cpp
cin
```

Avec `using namespace std;`, on écrit :

```cpp
cin
```

Sans `using namespace std;`, on écrit :

```cpp
std::cin
```

`cin` signifie **character input** et appartient au namespace `std`.

---

# 3. L'opérateur `>>`

Pour donner une valeur à une variable avec `cin`, on utilise :

```cpp
cin >> variable;
```

### Exemple

```cpp
int age;

cin >> age;
```

Le programme attend que l'utilisateur entre un nombre.

Si l'utilisateur écrit :

```text
23
```

alors :

```text
age = 23
```

---

# 4. Exemple complet

```cpp
#include <iostream>
using namespace std;

int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age is: " << age << endl;

    return 0;
}
```

### Fonctionnement

```text
Enter your age: 23
Your age is: 23
```

Le programme :

1. crée la variable `age`
2. demande l'âge
3. attend l'utilisateur
4. récupère `23`
5. met `23` dans `age`
6. affiche la valeur

---

# 5. Input avec plusieurs variables

On peut demander plusieurs informations.

```cpp
int age;
double price;

cout << "Enter your age: ";
cin >> age;

cout << "Enter the price: ";
cin >> price;
```

L'utilisateur peut entrer :

```text
23
99.99
```

On obtient :

```text
age = 23
price = 99.99
```

---

# 6. Plusieurs valeurs avec un seul `cin`

On peut aussi écrire :

```cpp
int age;
double price;

cin >> age >> price;
```

L'utilisateur peut entrer :

```text
23 99.99
```

Le premier nombre va dans `age`.

Le deuxième va dans `price`.

```text
23       → age
99.99    → price
```

---

# 7. Input avec `string`

Pour récupérer un seul mot :

```cpp
string name;

cin >> name;
```

Si l'utilisateur écrit :

```text
Aya
```

alors :

```text
name = "Aya"
```

---

# 8. Le problème avec les espaces

Attention :

```cpp
cin >> name;
```

lit généralement **un seul mot**.

Si l'utilisateur écrit :

```text
Aya Mojahid
```

`cin >> name` récupère seulement :

```text
Aya
```

Pour récupérer **une ligne complète**, on utilise :

```cpp
getline(cin, name);
```

Ainsi :

```text
Aya Mojahid
```

est récupéré entièrement.

---

# 9. `cin` et les différents types

Le type de la variable doit correspondre à la donnée attendue.

### Entier

```cpp
int age;
cin >> age;
```

Exemple :

```text
23
```

### Décimal

```cpp
double price;
cin >> price;
```

Exemple :

```text
99.99
```

### Caractère

```cpp
char letter;
cin >> letter;
```

Exemple :

```text
A
```

### Booléen

```cpp
bool student;
cin >> student;
```

On peut entrer :

```text
1
```

pour `true` ou :

```text
0
```

pour `false`.

### Texte

```cpp
string name;
cin >> name;
```

Exemple :

```text
Aya
```

---

# 10. `cout` et `cin`

Il faut bien faire la différence :

### `cout` → Output

Le programme **envoie une information vers l'écran**.

```cpp
cout << "Hello";
```

### `cin` → Input

L'utilisateur **envoie une information vers le programme**.

```cpp
cin >> age;
```

### 🧠 À retenir

```text
INPUT
Utilisateur → Programme

OUTPUT
Programme → Écran
```

---

# 11. Exemple avec plusieurs types

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int age;
    double price;
    char letter;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter a price: ";
    cin >> price;

    cout << "Enter a letter: ";
    cin >> letter;

    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Letter: " << letter << endl;

    return 0;
}
```

### Exemple d'exécution

```text
Enter your name: Aya
Enter your age: 23
Enter a price: 99.99
Enter a letter: A

Name: Aya
Age: 23
Price: 99.99
Letter: A
```

---

# ⭐ Les éléments importants à retenir

| Élément     | Rôle                               |
| ----------- | ---------------------------------- |
| `cin`       | récupérer une donnée               |
| `>>`        | envoyer l'entrée dans une variable |
| `cout`      | afficher une donnée                |
| `<<`        | envoyer une donnée vers `cout`     |
| `getline()` | récupérer une ligne complète       |
| `int`       | entier                             |
| `double`    | nombre décimal                     |
| `char`      | caractère                          |
| `bool`      | vrai/faux                          |
| `string`    | texte                              |

## 🧠 Formule essentielle

Pour récupérer une donnée :

```text
cin >> variable;
```

Pour afficher une donnée :

```text
cout << variable;
```

### 🔑 La différence fondamentale

**`cin` = Input → information qui entre dans le programme**

**`cout` = Output → information qui sort du programme**
