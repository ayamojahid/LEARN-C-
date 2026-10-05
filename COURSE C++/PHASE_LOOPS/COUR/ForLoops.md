# 🔁 C++ — For Loops

## 1. Qu'est-ce qu'une Loop ?

Une **loop** (boucle) permet de **répéter plusieurs fois une même action**.

Par exemple, si on veut afficher :

```text
1
2
3
4
5
```

On pourrait écrire 5 fois `cout`.

Mais ce serait répétitif.

Avec une boucle `for`, on dit simplement :

> **Répète cette action pour chaque valeur de 1 à 5.**

---

# 2. Pourquoi utiliser une `for loop` ?

Une boucle est utile quand on sait que l'on veut répéter une action plusieurs fois.

Exemples :

* afficher les nombres de 1 à 10
* afficher les éléments d'un Array
* calculer une somme
* rechercher une valeur dans un Array
* répéter une opération un nombre précis de fois

---

# 3. Syntaxe de base

```cpp
for (initialization; condition; update)
{
    // code à répéter
}
```

Il y a **3 parties importantes** :

```text
for ( initialisation ; condition ; update )
      ↓                  ↓          ↓
    départ            continuer   avancer
```

---

# 4. Exemple très simple

```cpp
for (int i = 1; i <= 5; i++)
{
    cout << i << endl;
}
```

Résultat :

```text
1
2
3
4
5
```

Maintenant, comprenons **exactement** ce qui se passe.

---

# 5. Première partie : `int i = 1`

```cpp
int i = 1;
```

C'est l'**initialisation**.

On crée une variable `i` et on lui donne la valeur :

```text
i = 1
```

C'est le point de départ de la boucle.

---

# 6. Deuxième partie : `i <= 5`

```cpp
i <= 5
```

C'est la **condition**.

Elle signifie :

> Tant que `i` est inférieur ou égal à 5, continue la boucle.

Donc :

```text
i = 1 → vrai ✅
i = 2 → vrai ✅
i = 3 → vrai ✅
i = 4 → vrai ✅
i = 5 → vrai ✅
i = 6 → faux ❌
```

Quand la condition devient `false`, la boucle s'arrête.

---

# 7. Troisième partie : `i++`

```cpp
i++
```

C'est l'**update**.

Après chaque tour, on augmente `i` de 1.

Donc :

```text
1 → 2 → 3 → 4 → 5 → 6
```

---

# 8. Comment fonctionne réellement la boucle ?

Prenons :

```cpp
for (int i = 1; i <= 5; i++)
{
    cout << i << endl;
}
```

Le programme fait :

```text
① i = 1
      ↓
② i <= 5 ?
      ↓
    YES ✅
      ↓
③ cout << i
      ↓
    affiche 1
      ↓
④ i++
      ↓
    i = 2
      ↓
② i <= 5 ?
      ↓
    YES ✅
      ↓
③ affiche 2
      ↓
④ i++
      ↓
    ...
```

Jusqu'à :

```text
i = 5
 ↓
5 <= 5 → YES
 ↓
affiche 5
 ↓
i++
 ↓
i = 6
 ↓
6 <= 5 → NO
 ↓
STOP
```

---

# ⭐ 9. La formule mentale à retenir

Quand tu vois :

```cpp
for (int i = 1; i <= 5; i++)
```

Lis-la comme une phrase :

> **Commence à 1, continue jusqu'à 5, avance de 1.**

C'est la meilleure manière de comprendre un `for`.

---

# 10. `i++`, `i--` et `i +=`

L'update ne doit pas obligatoirement être `i++`.

### `i++`

Ajoute 1 :

```text
1 → 2 → 3 → 4 → 5
```

### `i--`

Retire 1 :

```text
5 → 4 → 3 → 2 → 1
```

Exemple :

```cpp
for (int i = 5; i >= 1; i--)
{
    cout << i << endl;
}
```

Résultat :

```text
5
4
3
2
1
```

---

### `i += 2`

Ajoute 2 :

```text
1 → 3 → 5 → 7 → 9
```

```cpp
for (int i = 1; i <= 9; i += 2)
{
    cout << i << endl;
}
```

Résultat :

```text
1
3
5
7
9
```

---

# 11. Commencer à `0`

On commence très souvent à `0`, surtout avec les **Arrays**.

```cpp
for (int i = 0; i < 5; i++)
{
    cout << i << endl;
}
```

Résultat :

```text
0
1
2
3
4
```

Pourquoi pas `5` ?

Parce que la condition est :

```cpp
i < 5
```

et non :

```cpp
i <= 5
```

Quand `i = 5` :

```text
5 < 5 → false
```

Donc la boucle s'arrête.

---

# 12. `i < 5` VS `i <= 5`

C'est **très important**.

### `i < 5`

```text
0 1 2 3 4
```

➡️ 5 tours.

### `i <= 5`

```text
0 1 2 3 4 5
```

➡️ 6 tours.

Donc :

```text
<  → ne prend pas 5

<= → prend 5
```

---

# 13. `for` avec un Array

C'est l'une des utilisations les plus importantes.

On a :

```cpp
int numbers[5] = {10, 20, 30, 40, 50};
```

Les indexes sont :

```text
Index :   0    1    2    3    4
          ↓    ↓    ↓    ↓    ↓
Value :  10   20   30   40   50
```

Pour parcourir tout l'Array :

```cpp
for (int i = 0; i < 5; i++)
{
    cout << numbers[i] << endl;
}
```

Résultat :

```text
10
20
30
40
50
```

### La logique

```text
i = 0 → numbers[0] → 10
i = 1 → numbers[1] → 20
i = 2 → numbers[2] → 30
i = 3 → numbers[3] → 40
i = 4 → numbers[4] → 50
```

---

# 14. Pourquoi `i < size` avec un Array ?

Si l'Array contient 5 éléments :

```cpp
int numbers[5];
```

Les indexes sont :

```text
0  1  2  3  4
```

Le dernier index est :

```text
size - 1
```

Donc :

```text
5 - 1 = 4
```

C'est pourquoi on écrit généralement :

```cpp
for (int i = 0; i < 5; i++)
```

et pas :

```cpp
for (int i = 0; i <= 5; i++)
```

Car `numbers[5]` n'existe pas dans cet Array.

---

# 15. `for` pour calculer une somme

Exemple :

```cpp
int numbers[5] = {10, 20, 30, 40, 50};

int sum = 0;

for (int i = 0; i < 5; i++)
{
    sum = sum + numbers[i];
}

cout << sum;
```

La logique :

```text
sum = 0

i = 0 → sum = 0 + 10 → 10
i = 1 → sum = 10 + 20 → 30
i = 2 → sum = 30 + 30 → 60
i = 3 → sum = 60 + 40 → 100
i = 4 → sum = 100 + 50 → 150
```

Résultat :

```text
150
```

---

# 16. `for` pour rechercher une valeur

Exemple :

```cpp
int numbers[5] = {10, 20, 30, 40, 50};

for (int i = 0; i < 5; i++)
{
    if (numbers[i] == 30)
    {
        cout << "30 found";
    }
}
```

La boucle vérifie :

```text
numbers[0] == 30 ? ❌
numbers[1] == 30 ? ❌
numbers[2] == 30 ? ✅
```

Donc :

```text
30 found
```

---

# 17. Une boucle peut contenir une condition

C'est très fréquent :

```cpp
for (...)
{
    if (...)
    {
        ...
    }
}
```

Il faut comprendre les rôles :

```text
for
 ↓
répète

if
 ↓
décide
```

Par exemple :

> Parcours tous les nombres et affiche seulement les nombres pairs.

```cpp
for (int i = 1; i <= 10; i++)
{
    if (i % 2 == 0)
    {
        cout << i << endl;
    }
}
```

Résultat :

```text
2
4
6
8
10
```

---

# 18. Attention à `i` !

Dans une boucle :

```cpp
for (int i = 0; i < 5; i++)
```

`i` est généralement appelé :

* **counter**
* **index** lorsqu'on parcourt un Array

Exemple avec Array :

```cpp
numbers[i]
```

Ici `i` représente **l'index actuel**.

---

# 19. Plusieurs `for` indépendants

On peut avoir plusieurs boucles :

```cpp
for (int i = 1; i <= 3; i++)
{
    cout << i << endl;
}

for (int i = 5; i <= 7; i++)
{
    cout << i << endl;
}
```

Résultat :

```text
1
2
3
5
6
7
```

Chaque boucle possède son propre `i`.

---

# 20. Nested `for` loops

On peut avoir une boucle à l'intérieur d'une autre.

```cpp
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 2; j++)
    {
        cout << i << " " << j << endl;
    }
}
```

Ici :

```text
for i
  ↓
  for j
```

La boucle `j` se termine complètement pour chaque valeur de `i`.

Conceptuellement :

```text
i = 1
    j = 1
    j = 2

i = 2
    j = 1
    j = 2

i = 3
    j = 1
    j = 2
```

Les nested loops sont très utiles pour travailler avec des **tableaux 2D**, des matrices, des lignes et des colonnes.

---

# 🧠 Comment savoir quelle `for` écrire ?

Avant d'écrire le code, pose-toi ces questions :

### 1️⃣ Où je commence ?

```cpp
int i = 0;
```

ou :

```cpp
int i = 1;
```

### 2️⃣ Jusqu'où je vais ?

```cpp
i < 5
```

ou :

```cpp
i <= 5
```

### 3️⃣ Comment j'avance ?

```cpp
i++
```

ou :

```cpp
i--
```

ou :

```cpp
i += 2
```

---

# ⭐ La logique principale

Pour un Array :

```text
ARRAY
  ↓
Combien d'éléments ?
  ↓
SIZE = 5
  ↓
Premier index = 0
  ↓
Dernier index = SIZE - 1
  ↓
Besoin de parcourir ?
  ↓
FOR
  ↓
i = 0
  ↓
i < SIZE
  ↓
i++
```

Donc la forme que tu dois reconnaître immédiatement est :

```cpp
for (int i = 0; i < size; i++)
{
    // travailler avec l'élément actuel
}
```

---

# 📌 Résumé

```cpp
for (initialization; condition; update)
```

### Initialisation

```cpp
int i = 0;
```

➡️ Où je commence ?

### Condition

```cpp
i < 5;
```

➡️ Jusqu'à quand je continue ?

### Update

```cpp
i++;
```

➡️ Comment j'avance ?

### À retenir

> **FOR = Start → Check → Execute → Update → Repeat**

```text
Start
  ↓
Check
  ↓
Execute
  ↓
Update
  ↓
Check
  ↓
...
  ↓
False
  ↓
STOP
```
