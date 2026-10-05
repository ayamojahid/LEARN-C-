# Enums en C++

Un **enum** (enumeration) permet de créer un type qui contient **un ensemble de valeurs prédéfinies**.

👉 Au lieu d'utiliser plusieurs nombres ou chaînes pour représenter des choix fixes, on donne des **noms** aux choix.

---

## 1. Créer un enum

On utilise le mot-clé :

```cpp
enum
```

Exemple :

```cpp
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
```

Ici, `Day` est un nouveau type.

Il peut avoir uniquement les valeurs définies :

```text
Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
Sunday
```

---

## 2. Créer une variable enum

```cpp
Day today = Monday;
```

Ici :

```text
Day    → type
today  → variable
Monday → valeur
```

On peut ensuite afficher :

```cpp
cout << today;
```

⚠️ Par défaut, C++ affiche le **numéro associé** à la valeur.

---

## 3. Les valeurs commencent à `0`

Par défaut, C++ donne automatiquement un numéro à chaque élément.

```cpp
enum Day {
    Monday,     // 0
    Tuesday,    // 1
    Wednesday,  // 2
    Thursday,   // 3
    Friday      // 4
};
```

Donc :

```text
Monday    → 0
Tuesday   → 1
Wednesday → 2
Thursday  → 3
Friday    → 4
```

---

## 4. Donner ses propres valeurs

On peut choisir les valeurs nous-mêmes.

```cpp
enum Level {
    Easy = 1,
    Medium = 2,
    Hard = 3
};
```

Maintenant :

```text
Easy   → 1
Medium → 2
Hard   → 3
```

Exemple :

```cpp
Level level = Hard;

cout << level;
```

Résultat :

```text
3
```

---

## 5. Exemple simple

```cpp
#include <iostream>

using namespace std;

enum Color {
    Red,
    Green,
    Blue
};

int main() {

    Color color = Green;

    cout << color << endl;

    return 0;
}
```

Résultat :

```text
1
```

Car :

```text
Red   → 0
Green → 1
Blue  → 2
```

---

# 6. Pourquoi utiliser un enum ?

Un `enum` est utile lorsqu'une variable doit avoir **un choix limité de valeurs**.

### Exemple : jours

```cpp
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};
```

### Exemple : niveaux

```cpp
enum Level {
    Easy,
    Medium,
    Hard
};
```

### Exemple : statut

```cpp
enum Status {
    Pending,
    Approved,
    Rejected
};
```

Cela rend le programme **plus clair** que d'utiliser directement des nombres.

Par exemple :

```cpp
Status status = Approved;
```

est plus facile à comprendre que :

```cpp
int status = 2;
```

---

# 7. Exemple complet

```cpp
#include <iostream>

using namespace std;

enum Level {
    Easy = 1,
    Medium = 2,
    Hard = 3
};

int main() {

    Level gameLevel = Medium;

    cout << "Level number: " << gameLevel << endl;

    return 0;
}
```

Résultat :

```text
Level number: 2
```

---

# 🧠 À retenir

### Création

```cpp
enum Level {
    Easy,
    Medium,
    Hard
};
```

### Utilisation

```cpp
Level level = Easy;
```

### Avec valeurs personnalisées

```cpp
enum Level {
    Easy = 1,
    Medium = 2,
    Hard = 3
};
```

### Idée principale

> **Un `enum` permet de créer un type avec un nombre limité de valeurs nommées.**

```text
enum
 ↓
valeurs prédéfinies
 ↓
Easy | Medium | Hard
```

**`struct`** sert à regrouper plusieurs informations différentes.

**`enum`** sert à représenter un **choix parmi plusieurs valeurs prédéfinies**.
