/* Oui 👍 pense au **buffer comme un petit tableau temporaire** qui garde les textes avant de les afficher.

### 🟦 Avec `\n`

```cpp
cout << "Bonjour\n";
cout << "Aya\n";
cout << "Bienvenue\n";
```

Schéma :

```text
          BUFFER
       ┌─────────────┐
       │ Bonjour     │
       │ Aya         │
       │ Bienvenue   │
       └─────────────┘
              ↓
       affichage à l'écran
```

`\n` dit simplement :

> **« Passe à la ligne suivante. »**

Il ne demande pas forcément de vider le buffer immédiatement.

---

### 🟥 Avec `endl`

```cpp
cout << "Bonjour" << endl;
cout << "Aya" << endl;
```

À chaque `endl` :

```text
"Bonjour"
    ↓
  BUFFER
    ↓
  endl
    ↓
VIDER LE BUFFER
    ↓
ÉCRAN
```

Puis :

```text
"Aya"
  ↓
BUFFER
  ↓
endl
  ↓
VIDER LE BUFFER
  ↓
ÉCRAN
```

Donc si tu as **1000 `endl`** :

```text
Ligne 1 → endl → vider
Ligne 2 → endl → vider
Ligne 3 → endl → vider
Ligne 4 → endl → vider
...
Ligne 1000 → endl → vider
```

👉 Il y a **beaucoup de flush**, donc cela peut être **plus lent**.

Avec `\n` :

```text
Ligne 1 → \n
Ligne 2 → \n
Ligne 3 → \n
Ligne 4 → \n
...
Ligne 1000 → \n
```

👉 On demande seulement de **changer de ligne**, sans forcer le flush à chaque fois.

### 🧠 À retenir très simplement

```text
\n
 ↓
Nouvelle ligne
 ↓
"Je continue à remplir/écrire normalement"


endl
 ↓
Nouvelle ligne
 +
Vider le buffer immédiatement
```

**Donc :**

> `\n` = **nouvelle ligne**
> `endl` = **nouvelle ligne + vider le buffer**

Pour beaucoup de lignes, **`\n` est généralement préférable**.

*/

//to insert a new line you can use the \n character

#include <iostream>
int main() {
std::cout << "aya mojahid\n" ;
std::cout << "this is my first c++ program";
return 0; 
}

//another wa to usert  new line is with the std::endl manipulator

#include <iostream>
int main() {
std::cout << "aya mojahid " << std::endl ;
std::cout << "this is my first c++ program";
return 0; 
}



