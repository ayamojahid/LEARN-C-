# Do...While Loop — C++

La boucle **`do...while`** ressemble à `while`, mais il y a une différence très importante :

> **`do...while` exécute le code au moins une fois**, puis vérifie la condition.

### 1. Syntaxe

```cpp
do
{
    // code
}
while (condition);
```

⚠️ Il y a un **`;` après `while(condition)`**.

---

### 2. Exemple simple

```cpp
int i = 1;

do
{
    cout << i << endl;
    i++;
}
while (i <= 5);
```

Résultat :

```text
1
2
3
4
5
```

### 🧠 Comment ça fonctionne ?

Avec `do...while` :

```text
Exécuter le code
      ↓
Vérifier la condition
      ↓
   vraie ?
   /    \
 oui    non
  ↓      ↓
répéter  arrêter
```

Donc :

```text
i = 1
↓
afficher 1
↓
i devient 2
↓
2 <= 5 → vrai
↓
afficher 2
...
```

---

## 3. Différence avec `while`

### `while`

La condition est vérifiée **avant** l'exécution :

```cpp
int i = 10;

while (i < 5)
{
    cout << i;
}
```

Résultat :

```text
rien
```

Parce que :

```text
10 < 5 → false
```

---

### `do...while`

Le code est exécuté **avant** de vérifier :

```cpp
int i = 10;

do
{
    cout << i;
}
while (i < 5);
```

Résultat :

```text
10
```

Même si :

```text
10 < 5 → false
```

Parce que le `cout` a déjà été exécuté une fois.

---

## 4. Exemple très pratique : demander un nombre

Supposons que tu veux demander un nombre jusqu'à ce que l'utilisateur entre `10`.

```cpp
int number;

do
{
    cout << "Enter 10: ";
    cin >> number;
}
while (number != 10);
```

Si l'utilisateur entre :

```text
5
3
8
10
```

La boucle s'arrête à `10`.

### Pourquoi `do...while` est intéressant ici ?

Parce que tu veux **obligatoirement demander au moins une fois** :

```text
Demander le nombre
       ↓
Vérifier
       ↓
Pas 10 → redemander
       ↓
10 → arrêter
```

---

## 🔑 À retenir

### `while`

> **Vérifie → puis exécute**

```cpp
while (condition)
{
    // code
}
```

### `do...while`

> **Exécute → puis vérifie**

```cpp
do
{
    // code
}
while (condition);
```

👉 La phrase à mémoriser :

**`do...while` = "Fais-le au moins une fois, puis continue tant que la condition est vraie."**


La différence principale entre **`while`** et **`do...while`** est **le moment où la condition est vérifiée**.

| `while`                        | `do...while`                   |
| ------------------------------ | ------------------------------ |
| Vérifie la condition **avant** | Vérifie la condition **après** |
| Peut exécuter **0 fois**       | S'exécute **au moins 1 fois**  |
| `while (condition)`            | `do { } while (condition);`    |

### 🔵 `while`

```cpp
int i = 10;

while (i < 5) {
    cout << i;
}
```

La condition :

```text
10 < 5 → false
```

➡️ Le code **ne s'exécute jamais**.

---

### 🟢 `do...while`

```cpp
int i = 10;

do {
    cout << i;
}
while (i < 5);
```

D'abord :

```text
cout << i → 10
```

Puis :

```text
10 < 5 → false
```

➡️ Le code s'est exécuté **une fois**.

### 🧠 Astuce pour mémoriser

**WHILE :**

> « Est-ce que je peux commencer ? » → Oui → exécute.

**DO...WHILE :**

> « Fais-le d'abord, puis demande si on continue. »

Donc :

```text
WHILE       → condition → code
DO WHILE    → code → condition
```
