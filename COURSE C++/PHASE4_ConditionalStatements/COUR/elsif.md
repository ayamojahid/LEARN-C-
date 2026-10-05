# 🔀 Conditional `else if` Statement

## 1. Qu'est-ce que `else if` ?

`else if` permet de vérifier **plusieurs conditions** l'une après l'autre.

Avec seulement `if...else`, on a généralement **deux possibilités** :

```text
TRUE  → IF
FALSE → ELSE
```

Avec `else if`, on peut avoir plusieurs possibilités :

```text
Condition 1 ?
    ↓
   TRUE → Action 1
   FALSE
     ↓
Condition 2 ?
    ↓
   TRUE → Action 2
   FALSE
     ↓
Condition 3 ?
    ↓
   TRUE → Action 3
   FALSE
     ↓
   ELSE
```

---

# 2. Syntaxe

```cpp
if (condition1)
{
    // code
}
else if (condition2)
{
    // code
}
else if (condition3)
{
    // code
}
else
{
    // aucune condition vraie
}
```

👉 On peut avoir **plusieurs `else if`**.

---

# 3. Exemple simple : âge

Supposons :

* moins de 13 → Child
* 13 à 17 → Teenager
* 18 à 59 → Adult
* 60 ou plus → Senior

```cpp
int age = 20;

if (age < 13)
{
    cout << "Child";
}
else if (age < 18)
{
    cout << "Teenager";
}
else if (age < 60)
{
    cout << "Adult";
}
else
{
    cout << "Senior";
}
```

### Avec `age = 20`

Le programme vérifie :

```text
20 < 13 ?  → FALSE ❌
20 < 18 ?  → FALSE ❌
20 < 60 ?  → TRUE ✅
```

Donc :

```text
Adult
```

---

# 4. Exemple avec une note

On peut classer une note :

```text
18 - 20 → Excellent
16 - 17.99 → Very Good
14 - 15.99 → Good
10 - 13.99 → Pass
< 10 → Fail
```

Code :

```cpp
double grade = 16;

if (grade >= 18)
{
    cout << "Excellent";
}
else if (grade >= 16)
{
    cout << "Very Good";
}
else if (grade >= 14)
{
    cout << "Good";
}
else if (grade >= 10)
{
    cout << "Pass";
}
else
{
    cout << "Fail";
}
```

Avec :

```text
grade = 16
```

Le programme trouve :

```text
16 >= 18 → FALSE
16 >= 16 → TRUE
```

Donc :

```text
Very Good
```

---

# 5. ⚠️ Une seule partie est exécutée

C'est très important.

Dans une chaîne :

```cpp
if
else if
else if
else
```

le programme exécute **le premier bloc dont la condition est vraie**, puis il quitte toute la chaîne.

Exemple :

```cpp
int number = 10;

if (number > 0)
{
    cout << "Positive";
}
else if (number == 10)
{
    cout << "Number is 10";
}
```

Résultat :

```text
Positive
```

Pourquoi ?

Parce que :

```text
number > 0 → TRUE
```

Le programme n'a donc pas besoin de vérifier le `else if`.

---

# 6. Différence entre plusieurs `if` et `else if`

### Plusieurs `if`

```cpp
if (number > 0)
{
    cout << "Positive";
}

if (number == 10)
{
    cout << "Ten";
}
```

Les **deux conditions sont vérifiées**.

Si `number = 10` :

```text
Positive
Ten
```

---

### `if...else if`

```cpp
if (number > 0)
{
    cout << "Positive";
}
else if (number == 10)
{
    cout << "Ten";
}
```

Avec `number = 10` :

```text
Positive
```

Le deuxième bloc n'est pas exécuté.

### 🧠 À retenir

```text
if + if
→ chaque if est indépendant

if + else if
→ une seule branche est choisie
```

---

# 7. `else if` sans `else`

Le `else` est **optionnel**.

On peut écrire :

```cpp
int age = 20;

if (age < 13)
{
    cout << "Child";
}
else if (age < 18)
{
    cout << "Teenager";
}
else if (age < 60)
{
    cout << "Adult";
}
```

Si aucune condition n'est vraie, rien ne sera exécuté.

---

# 8. `else if` avec `cin`

Exemple pratique :

```cpp
int age;

cout << "Enter your age: ";
cin >> age;

if (age < 13)
{
    cout << "Child";
}
else if (age < 18)
{
    cout << "Teenager";
}
else if (age < 60)
{
    cout << "Adult";
}
else
{
    cout << "Senior";
}
```

Le programme demande une valeur puis choisit **une seule catégorie**.

---

# 9. Comment réfléchir avant d'écrire ?

Exemple :

```cpp
int grade = 14;
```

On veut savoir la catégorie.

Je pose les questions dans l'ordre :

```text
grade >= 18 ?
    ↓ FALSE

grade >= 16 ?
    ↓ FALSE

grade >= 14 ?
    ↓ TRUE
```

Donc :

```text
Good
```

👉 **L'ordre des conditions est important.**

---

# ⭐ Résumé

### `if`

```cpp
if (condition)
{
    // action
}
```

→ première condition.

### `else if`

```cpp
else if (condition)
{
    // action
}
```

→ autre possibilité si la condition précédente était fausse.

### `else`

```cpp
else
{
    // action
}
```

→ aucune condition précédente n'était vraie.

---

## 🧠 Logique principale

```text
             IF
              ↓
        condition TRUE ?
          ↙          ↘
       YES            NO
        ↓              ↓
     Action        ELSE IF
                       ↓
                condition TRUE ?
                  ↙          ↘
               YES            NO
                ↓              ↓
             Action          ELSE
                               ↓
                             Action
```

### La phrase à mémoriser :

> **`if` teste la première condition, `else if` teste les autres possibilités, et `else` s'exécute si aucune condition n'est vraie.**

![Logo du projet](Pics/ifElse.png)
