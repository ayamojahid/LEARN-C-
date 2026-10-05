# Data Type Conversion & Type Casting in C++

La **conversion de type** signifie transformer une valeur d'un type en un autre.

Exemples :

```text
double → int
string → int
string → double
int → string
double → string
```

---

# 1. Implicit Conversion

**Implicit conversion** = C++ fait la conversion **automatiquement**.

Exemple :

```cpp
int Num1;
double Num2 = 18.99;

Num1 = Num2;
```

Ici :

```text
double → int
18.99  → 18
```

C++ convertit automatiquement `Num2` en `int`.

### Exemple complet

```cpp
#include <iostream>
using namespace std;

int main()
{
    int Num1;
    double Num2 = 18.99;

    Num1 = Num2;

    cout << Num1 << endl;

    return 0;
}
```

Résultat :

```text
18
```

⚠️ La partie décimale est supprimée.

---

# 2. Explicit Conversion

**Explicit conversion** = c'est nous qui demandons à C++ de faire la conversion.

Il existe plusieurs syntaxes.

## Méthode 1 : C-style casting

```cpp
Num1 = (int)Num2;
```

Exemple :

```cpp
double Num2 = 18.99;

int Num1 = (int)Num2;

cout << Num1;
```

Résultat :

```text
18
```

---

# 3. Explicit Conversion avec `int()`

On peut également écrire :

```cpp
Num1 = int(Num2);
```

Exemple :

```cpp
double Num2 = 18.99;

int Num1 = int(Num2);

cout << Num1;
```

Résultat :

```text
18
```

Ces deux écritures font ici la même chose :

```cpp
(int)Num2
```

et

```cpp
int(Num2)
```

---

# 4. `static_cast`

En C++, la forme moderne et généralement recommandée est :

```cpp
static_cast<int>(Num2)
```

Exemple :

```cpp
double Num2 = 18.99;

int Num1 = static_cast<int>(Num2);

cout << Num1;
```

Résultat :

```text
18
```

### À retenir

```text
Implicit
↓
C++ convertit automatiquement

Explicit
↓
Nous demandons la conversion
```

---

# 5. Convert String to int, float, double

Une `string` contient du **texte**.

Par exemple :

```cpp
string str = "123.456";
```

Même si `"123.456"` ressemble à un nombre, c'est une **string**.

Pour transformer cette string en nombre, C++ fournit plusieurs fonctions.

---

## 5.1 `stoi()` → String to Integer

`stoi` signifie :

**String To Integer**

```cpp
string str = "123.456";

int num_int = stoi(str);
```

Résultat :

```text
123
```

⚠️ `int` ne garde pas la partie décimale.

---

## 5.2 `stof()` → String to Float

`stof` signifie :

**String To Float**

```cpp
string str = "123.456";

float num_float = stof(str);
```

Résultat :

```text
123.456
```

---

## 5.3 `stod()` → String to Double

`stod` signifie :

**String To Double**

```cpp
string str = "123.456";

double num_double = stod(str);
```

Résultat :

```text
123.456
```

---

# 6. Exemple complet : String → Numbers

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "123.456";

    // String → Integer
    int num_int = stoi(str);

    // String → Float
    float num_float = stof(str);

    // String → Double
    double num_double = stod(str);

    cout << "num_int = " << num_int << endl;
    cout << "num_float = " << num_float << endl;
    cout << "num_double = " << num_double << endl;

    return 0;
}
```

Résultat :

```text
num_int = 123
num_float = 123.456
num_double = 123.456
```

---

# 7. Convert Numbers to String

On peut aussi faire l'inverse :

```text
Number → String
```

Pour cela, on utilise :

```cpp
to_string()
```

---

## 7.1 int → string

```cpp
int Num1 = 123;

string St1;

St1 = to_string(Num1);
```

Maintenant :

```text
Num1 = 123       → int
St1  = "123"     → string
```

---

## 7.2 double → string

```cpp
double Num2 = 18.99;

string St2;

St2 = to_string(Num2);
```

Maintenant :

```text
Num2 = 18.99     → double
St2  = "18.990000" → string
```

⚠️ `to_string()` peut afficher plusieurs chiffres après la virgule pour un `double`.

---

# 8. Exemple complet : Numbers → String

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Num1 = 123;
    double Num2 = 18.99;

    string St1, St2;

    St1 = to_string(Num1);
    St2 = to_string(Num2);

    cout << St1 << endl;
    cout << St2 << endl;

    return 0;
}
```

Résultat possible :

```text
123
18.990000
```

---

# 9. Tableau à retenir

| Conversion        | Fonction      |
| ----------------- | ------------- |
| `double → int`    | casting       |
| `string → int`    | `stoi()`      |
| `string → float`  | `stof()`      |
| `string → double` | `stod()`      |
| `int → string`    | `to_string()` |
| `double → string` | `to_string()` |

---

# 10. Les fonctions importantes

### String → Number

```cpp
stoi(str);   // string → int
stof(str);   // string → float
stod(str);   // string → double
```

### Number → String

```cpp
to_string(number);
```

### Type Casting

```cpp
(int)Num2;
```

ou :

```cpp
int(Num2);
```

ou, forme moderne :

```cpp
static_cast<int>(Num2);
```

---

# ⭐ Résumé très important

Il faut retenir ces **3 grandes catégories** :

### 1️⃣ Conversion automatique

```cpp
int x;
double y = 18.99;

x = y;
```

➡️ **Implicit conversion**

---

### 2️⃣ Conversion explicite

```cpp
x = (int)y;
```

ou :

```cpp
x = int(y);
```

ou :

```cpp
x = static_cast<int>(y);
```

➡️ **Explicit conversion / Type casting**

---

### 3️⃣ Conversion String ↔ Number

```cpp
stoi(str);       // String → int
stof(str);       // String → float
stod(str);       // String → double

to_string(num);  // Number → String
```

### 🧠 Astuce pour mémoriser

```text
stoi  → String To Integer
stof  → String To Float
stod  → String To Double

to_string → To String
```

![Logo du projet](pics/DataTypeConversion.png);
