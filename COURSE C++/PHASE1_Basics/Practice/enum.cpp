


#include <iostream>

using namespace std;

// Création de l'enum
enum Color {
    Red,
    Green,
    Blue
};

int main() {

    // Création d'une variable Color

    Color myColor = Color::Blue;
    cout << myColor << endl;

    Color color = Green;

    // Affichage
    cout << "Color number: " << color << endl;

    return 0;
}



/*

### Résultat

```text
Color number: 1
```

Parce que par défaut :

```text
Red   → 0
Green → 1
Blue  → 2
```

### Autre exemple avec des valeurs

```cpp
#include <iostream>

using namespace std;

enum Level {
    Easy = 1,
    Medium = 2,
    Hard = 3
};

int main() {

    Level level = Hard;

    cout << "Level: " << level << endl;

    return 0;
}



Résultat :

```text
Level: 3
```

👉 L'idée principale :

```cpp
Level level = Hard;
```

La variable `level` peut utiliser les valeurs définies dans `Level` : **Easy, Medium ou Hard**.


*/