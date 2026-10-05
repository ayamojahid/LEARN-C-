# 🔁 C++ — Nested For Loops

## 1. Qu'est-ce qu'une Nested `for` Loop ?

**Nested** signifie **imbriquée**.

Une **Nested `for` Loop** est simplement :

> **Une boucle `for` placée à l'intérieur d'une autre boucle `for`.**

Structure :

```cpp
for (...)
{
    for (...)
    {
        // code
    }
}
```

On a donc :

```text
Outer Loop
    ↓
    Inner Loop
```

* **Outer loop** = boucle extérieure
* **Inner loop** = boucle intérieure

---

# 2. Exemple très simple

```cpp
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 2; j++)
    {
        cout << "i = " << i << ", j = " << j << endl;
    }
}
```

Résultat :

```text
i = 1, j = 1
i = 1, j = 2

i = 2, j = 1
i = 2, j = 2

i = 3, j = 1
i = 3, j = 2
```

---

# 3. Comment fonctionne la Nested Loop ?

C'est **le point le plus important**.

Regardons :

```cpp
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 2; j++)
    {
        cout << i << " " << j << endl;
    }
}
```

La boucle extérieure commence :

```text
i = 1
```

Maintenant elle entre dans la boucle intérieure.

La boucle intérieure fait **tous ses tours** :

```text
j = 1
j = 2
```

Quand `j` est terminé, on revient à la boucle extérieure.

Elle avance :

```text
i = 2
```

Puis la boucle intérieure recommence **depuis le début** :

```text
j = 1
j = 2
```

Puis :

```text
i = 3
```

Et encore :

```text
j = 1
j = 2
```

---

# 4. Visualisation

```text
i = 1
 ├── j = 1
 └── j = 2

i = 2
 ├── j = 1
 └── j = 2

i = 3
 ├── j = 1
 └── j = 2
```

Donc :

> **Pour chaque valeur de `i`, `j` parcourt toutes ses valeurs.**

C'est LA règle à retenir.

---

# 5. Pourquoi utiliser des Nested Loops ?

Elles sont particulièrement utiles lorsqu'on travaille avec :

* des **lignes et colonnes**
* des **matrices**
* des **tableaux 2D**
* des formes
* des combinaisons
* des comparaisons entre deux listes

Par exemple :

```text
Tableau

       Column
       1   2   3
Row 1  □   □   □
Row 2  □   □   □
Row 3  □   □   □
```

Une boucle peut gérer les **rows** et l'autre les **columns**.

---

# 6. Exemple : afficher un carré

```cpp
for (int row = 1; row <= 3; row++)
{
    for (int column = 1; column <= 3; column++)
    {
        cout << "* ";
    }

    cout << endl;
}
```

Résultat :

```text
* * *
* * *
* * *
```

### Comment ?

La boucle extérieure contrôle les lignes :

```text
row = 1
row = 2
row = 3
```

La boucle intérieure contrôle les étoiles dans chaque ligne :

```text
* * *
```

Donc :

```text
row 1 → * * *
row 2 → * * *
row 3 → * * *
```

---

# 7. Exemple : rectangle

```cpp
for (int row = 1; row <= 2; row++)
{
    for (int column = 1; column <= 5; column++)
    {
        cout << "* ";
    }

    cout << endl;
}
```

Résultat :

```text
* * * * *
* * * * *
```

Ici :

```text
2 rows
5 columns
```

Donc :

```text
2 × 5 = 10
```

La boucle intérieure s'exécute **5 fois pour chaque ligne**.

---

# 8. Combien de fois la boucle intérieure s'exécute ?

C'est très important pour comprendre les Nested Loops.

```cpp
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 4; j++)
    {
        cout << "*";
    }
}
```

La boucle extérieure fait :

```text
3 tours
```

La boucle intérieure fait :

```text
4 tours pour chaque tour extérieur
```

Donc :

```text
3 × 4 = 12
```

Le `cout` est exécuté **12 fois**.

---

# 9. Exemple avec `i` et `j`

```cpp
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 4; j++)
    {
        cout << i << "," << j << endl;
    }
}
```

Résultat :

```text
1,1
1,2
1,3
1,4

2,1
2,2
2,3
2,4

3,1
3,2
3,3
3,4
```

Observe bien :

```text
i = 1 → j fait 1,2,3,4
i = 2 → j fait 1,2,3,4
i = 3 → j fait 1,2,3,4
```

---

# 10. Nested Loops avec un Array 2D

Une utilisation très importante est le **2D Array**.

Exemple :

```cpp
int numbers[2][3] =
{
    {10, 20, 30},
    {40, 50, 60}
};
```

On peut le voir comme :

```text
          column
          0   1   2

row 0    10  20  30
row 1    40  50  60
```

Pour parcourir tous les éléments :

```cpp
for (int row = 0; row < 2; row++)
{
    for (int column = 0; column < 3; column++)
    {
        cout << numbers[row][column] << " ";
    }

    cout << endl;
}
```

Résultat :

```text
10 20 30
40 50 60
```

---

# 11. Comprendre `numbers[row][column]`

Il faut lire :

```cpp
numbers[row][column]
```

comme :

```text
Array
  ↓
row
  ↓
column
```

Par exemple :

```cpp
numbers[0][0]
```

donne :

```text
10
```

Et :

```cpp
numbers[1][2]
```

donne :

```text
60
```

---

# 12. Nested Loop + condition

On peut aussi mettre un `if` dans la boucle intérieure.

Exemple :

```cpp
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 3; j++)
    {
        if (i == j)
        {
            cout << "X ";
        }
        else
        {
            cout << "O ";
        }
    }

    cout << endl;
}
```

Résultat :

```text
X O O
O X O
O O X
```

Ici nous avons :

```text
for
 ↓
  for
   ↓
   if
```

---

# 13. Nested Loop avec un Array of Structures

Les Nested Loops peuvent aussi être utilisées avec plusieurs données.

Par exemple, si on veut comparer chaque étudiant avec chaque autre étudiant :

```text
Student 1 → compare with Student 1, 2, 3
Student 2 → compare with Student 1, 2, 3
Student 3 → compare with Student 1, 2, 3
```

On peut utiliser :

```text
Outer loop → étudiant actuel

Inner loop → étudiant avec lequel on compare
```

C'est une utilisation très importante dans les exercices d'algorithmique.

---

# 14. Différence entre deux `for` et Nested `for`

### Deux boucles séparées

```cpp
for (...)
{
    ...
}

for (...)
{
    ...
}
```

Elles fonctionnent l'une après l'autre.

```text
Loop 1
  ↓
fin
  ↓
Loop 2
```

---

### Nested loops

```cpp
for (...)
{
    for (...)
    {
        ...
    }
}
```

La deuxième boucle fonctionne **à l'intérieur de chaque tour de la première**.

```text
Loop 1
  ↓
  Loop 2
  ↓
  Loop 2
  ↓
fin Loop 1
  ↓
Loop 2 recommence
```

---

# 15. Erreur fréquente : confondre `i` et `j`

Dans une Nested Loop, on utilise souvent :

```cpp
i
```

pour la boucle extérieure et :

```cpp
j
```

pour la boucle intérieure.

Exemple :

```cpp
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout << i << " " << j;
    }
}
```

Cela permet de savoir rapidement :

```text
i → outer loop
j → inner loop
```

Mais `i` et `j` ne sont pas obligatoires. On peut utiliser d'autres noms comme :

```text
row
column
student
product
```

Des noms significatifs sont souvent plus faciles à comprendre.

---

# ⭐ 16. La règle la plus importante

Quand tu vois :

```cpp
for (A)
{
    for (B)
    {
        // action
    }
}
```

Pense :

> **Pour chaque A, je fais tous les B.**

Par exemple :

```text
Pour chaque ligne
    → parcourir toutes les colonnes
```

ou :

```text
Pour chaque étudiant
    → comparer avec tous les étudiants
```

ou :

```text
Pour chaque produit
    → vérifier toutes les catégories
```

---

# 🧠 17. Méthode pour résoudre un exercice

Quand tu vois un exercice avec deux niveaux, pose-toi deux questions :

### Question 1

> Qu'est-ce que je dois parcourir en premier ?

➡️ **Outer loop**

### Question 2

> Pour chaque élément du premier parcours, qu'est-ce que je dois parcourir complètement ?

➡️ **Inner loop**

---

## Exemple

> Afficher une matrice de 3 lignes et 4 colonnes.

### Analyse

Premier niveau :

```text
3 lignes
```

➡️ Outer loop.

Deuxième niveau :

```text
4 colonnes pour chaque ligne
```

➡️ Inner loop.

Donc :

```cpp
for (int row = 0; row < 3; row++)
{
    for (int column = 0; column < 4; column++)
    {
        ...
    }
}
```

---

# 📌 Résumé final

```text
Nested For Loop
       ↓
for à l'intérieur d'un autre for
       ↓
Outer Loop
       ↓
Inner Loop
```

### La règle :

> **Pour chaque tour de l'Outer Loop, l'Inner Loop fait tous ses tours.**

Exemple :

```cpp
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 2; j++)
    {
        cout << i << " " << j << endl;
    }
}
```

Mentalement :

```text
i = 1
 ├─ j = 1
 └─ j = 2

i = 2
 ├─ j = 1
 └─ j = 2

i = 3
 ├─ j = 1
 └─ j = 2
```

**3 × 2 = 6 exécutions** de l'instruction intérieure.

### 🧠 À retenir absolument :

**Outer = pour chaque**

**Inner = faire tous les éléments**

**Nested For = souvent utilisé pour Rows × Columns.**
