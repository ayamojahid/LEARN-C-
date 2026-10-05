# While Loop — C++

La boucle **`while`** permet de **répéter un bloc de code tant qu'une condition est vraie**.

## 1. Syntaxe

```cpp
while (condition)
{
    // code à répéter
}
```

La logique est :

```text
Condition ?
   ↓
 TRUE → exécuter le code
   ↓
retourner à la condition
   ↓
 FALSE → sortir de la boucle
```

---

## 2. Exemple simple

```cpp
int i = 1;

while (i <= 5)
{
    cout << i << endl;
    i++;
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

### Comment ça fonctionne ?

Au départ :

```text
i = 1
```

C++ vérifie :

```text
i <= 5 ?
```

C'est vrai → affiche `1`.

Puis :

```cpp
i++;
```

donne :

```text
i = 2
```

La condition est vérifiée encore :

```text
2 <= 5 → vrai
```

Et ainsi de suite.

Quand :

```text
i = 6
```

on a :

```text
6 <= 5 → faux
```

➡️ La boucle s'arrête.

---

# 3. Les 3 éléments importants

Une boucle `while` contient généralement :

### ① Initialisation

```cpp
int i = 1;
```

### ② Condition

```cpp
while (i <= 5)
```

### ③ Modification

```cpp
i++;
```

Donc :

```cpp
int i = 1;       // initialisation

while (i <= 5)   // condition
{
    cout << i << endl;

    i++;         // modification
}
```

⚠️ Si tu oublies `i++`, la condition peut rester toujours vraie et créer une **boucle infinie**.

---

# 4. `while` vs `for`

Les deux peuvent faire la même chose.

### Avec `for`

```cpp
for (int i = 1; i <= 5; i++)
{
    cout << i << endl;
}
```

### Avec `while`

```cpp
int i = 1;

while (i <= 5)
{
    cout << i << endl;
    i++;
}
```

La différence principale est surtout la manière d'organiser la boucle.

### `for`

On l'utilise souvent quand on connaît le nombre de répétitions :

> « Répète 10 fois. »

### `while`

On l'utilise souvent quand on veut répéter **jusqu'à ce qu'une condition devienne fausse** :

> « Continue tant que la condition est vraie. »

---

# 5. Exemple avec une condition

```cpp
int number = 1;

while (number != 0)
{
    cout << "Enter 0 to stop: ";
    cin >> number;
}
```

Ici, on ne sait pas combien de fois l'utilisateur va entrer un nombre.

La boucle continue tant que :

```text
number != 0
```

Dès que l'utilisateur entre `0` :

```text
0 != 0 → false
```

➡️ la boucle s'arrête.

---

# 6. Attention : `while` peut ne jamais s'exécuter

```cpp
int i = 10;

while (i < 5)
{
    cout << i;
}
```

La condition est déjà fausse :

```text
10 < 5 → false
```

Donc le contenu du `while` n'est **jamais exécuté**.

---

# 7. `while` = "tant que"

La meilleure façon de retenir :

> **WHILE = TANT QUE**

```cpp
while (condition)
```

se lit :

> **Tant que la condition est vraie, exécute le code.**

Exemple :

```cpp
while (i <= 10)
```

➡️ **Tant que `i` est inférieur ou égal à 10**, continue la boucle.


![Logo du projet](Pics/WhileLoop.png)
![Logo du projet](Pics/WhileLoop2.png)
