# Strings en C++

## 1. Qu'est-ce qu'une String ?

Une **string** est une chaîne de caractères, c'est-à-dire du **texte**.

Exemples :

```cpp
string name = "Aya";
string city = "Youssoufia";
string message = "Hello World";
```

Pour utiliser `string`, on inclut :

```cpp
#include <string>
```

On peut aussi utiliser `<iostream>` pour `cout`.

---

# 2. Déclarer une String

```cpp
string name;
```

Ici, on crée une variable `name` qui peut contenir du texte.

On peut ensuite lui donner une valeur :

```cpp
name = "Aya";
```

Ou directement :

```cpp
string name = "Aya";
```

---

# 3. Afficher une String

On utilise `cout` :

```cpp
string name = "Aya";

cout << name << endl;
```

Résultat :

```text
Aya
```

---

# 4. String avec plusieurs mots

Une string peut contenir plusieurs mots :

```cpp
string name = "Aya Mojahid";

cout << name;
```

Résultat :

```text
Aya Mojahid
```

---

# 5. Input avec `cin`

```cpp
string name;

cin >> name;
```

⚠️ `cin` lit seulement **un mot**.

Si l'utilisateur écrit :

```text
Aya Mojahid
```

`cin` récupère seulement :

```text
Aya
```

---

# 6. Input avec `getline()`

Pour lire une phrase ou plusieurs mots, on utilise :

```cpp
getline(cin, name);
```

Exemple :

```cpp
string name;

cout << "Enter your name: ";
getline(cin, name);

cout << name;
```

Si l'utilisateur écrit :

```text
Aya Mojahid
```

Le programme récupère :

```text
Aya Mojahid
```

---

# 7. Connaître la longueur d'une String

On utilise :

```cpp
.length()
```

ou :

```cpp
.size()
```

Exemple :

```cpp
string name = "Aya";

cout << name.length();
```

Résultat :

```text
3
```

Car :

```text
A y a
0 1 2
```

Il y a **3 caractères**.

---

# 8. Accéder à un caractère

On peut utiliser :

```cpp
name[index]
```

Exemple :

```cpp
string name = "Aya";

cout << name[0] << endl;
cout << name[1] << endl;
cout << name[2] << endl;
```

Résultat :

```text
A
y
a
```

⚠️ Les positions commencent à **0**.

```text
String : A y a
Index  : 0 1 2
```

---

# 9. Modifier un caractère

On peut changer un caractère :

```cpp
string name = "Aya";

name[0] = 'O';

cout << name;
```

Résultat :

```text
Oya
```

---

# 10. Concaténation

**Concatenation** = assembler plusieurs strings.

On utilise `+`.

```cpp
string firstName = "Aya";
string lastName = "Mojahid";

string fullName = firstName + " " + lastName;

cout << fullName;
```

Résultat :

```text
Aya Mojahid
```

---

# 11. Ajouter avec `+=`

On peut aussi utiliser :

```cpp
string text = "Hello";

text += " World";

cout << text;
```

Résultat :

```text
Hello World
```

---

# 12. Comparer des Strings

On peut utiliser :

```cpp
==
!=
<
>
<=
>=
```

Exemple :

```cpp
string a = "Hello";
string b = "Hello";

cout << (a == b);
```

Résultat :

```text
1
```

`1` signifie `true`.

---

# 13. `empty()`

`empty()` permet de vérifier si une string est vide.

```cpp
string name = "";

cout << name.empty();
```

Résultat :

```text
1
```

Donc la string est vide.

Si :

```cpp
string name = "Aya";
```

Alors :

```cpp
name.empty()
```

donne :

```text
0
```

---

# 14. `clear()`

`clear()` supprime tout le contenu d'une string.

```cpp
string name = "Aya";

name.clear();

cout << name;
```

Après `clear()` :

```text
name = ""
```

---

# 15. `find()`

`find()` permet de chercher un caractère ou un texte.

```cpp
string text = "Hello World";

cout << text.find("World");
```

Résultat :

```text
6
```

Parce que :

```text
H e l l o   W o r l d
0 1 2 3 4 5 6
```

`World` commence à l'index `6`.

---

# 16. `substr()`

`substr()` permet de récupérer une partie d'une string.

```cpp
string text = "Hello World";

string result = text.substr(0, 5);

cout << result;
```

Résultat :

```text
Hello
```

```cpp
substr(0, 5)
```

signifie :

* commencer à l'index `0`
* prendre `5` caractères

---

# 17. `erase()`

`erase()` permet de supprimer une partie d'une string.

Exemple :

```cpp
string text = "Hello World";

text.erase(5, 6);

cout << text;
```

Résultat :

```text
Hello
```

Ici :

```cpp
erase(5, 6)
```

commence à l'index `5` et supprime `6` caractères.

---

# 18. `insert()`

`insert()` permet d'ajouter du texte à une position.

```cpp
string text = "Hello World";

text.insert(6, "Beautiful ");

cout << text;
```

Résultat :

```text
Hello Beautiful World
```

---

# 19. `replace()`

`replace()` permet de remplacer une partie d'une string.

```cpp
string text = "Hello World";

text.replace(6, 5, "C++");

cout << text;
```

Résultat :

```text
Hello C++
```

---

# 20. Boucle avec une String

Une string peut être parcourue avec une boucle `for`.

```cpp
string text = "Hello";

for (int i = 0; i < text.length(); i++)
{
    cout << text[i] << endl;
}
```

Résultat :

```text
H
e
l
l
o
```

On utilise :

```cpp
text[i]
```

pour accéder à chaque caractère.

---

# 21. Exemple complet

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "Aya";
    string lastName = "Mojahid";

    // Length
    cout << "Length: " << firstName.length() << endl;

    // Character
    cout << "First character: " << firstName[0] << endl;

    // Concatenation
    string fullName = firstName + " " + lastName;

    cout << "Full name: " << fullName << endl;

    // Find
    cout << "Position of Mojahid: "
         << fullName.find("Mojahid") << endl;

    // Substring
    cout << "First name: "
         << fullName.substr(0, 3) << endl;

    return 0;
}
```

---

# ⭐ Les fonctions importantes à retenir

| Fonction     | Utilité             |
| ------------ | ------------------- |
| `.length()`  | longueur            |
| `.size()`    | longueur            |
| `.empty()`   | vérifier si vide    |
| `.clear()`   | vider               |
| `.find()`    | chercher            |
| `.substr()`  | extraire une partie |
| `.erase()`   | supprimer           |
| `.insert()`  | ajouter             |
| `.replace()` | remplacer           |

### Les opérations principales

```cpp
string text = "Hello";

text[0];                 // accéder à un caractère
text[0] = 'J';           // modifier
text.length();           // longueur
text + " World";         // concaténation
text += " World";        // ajouter
text.find("lo");         // chercher
text.substr(0, 3);       // extraire
text.erase(0, 2);        // supprimer
text.insert(0, "Hi ");   // insérer
text.replace(0, 2, "Yo"); // remplacer
```

### 🧠 À retenir

Une `string` est simplement du **texte**, mais C++ fournit beaucoup de fonctions pour **lire, modifier, chercher, supprimer et extraire** des caractères.
