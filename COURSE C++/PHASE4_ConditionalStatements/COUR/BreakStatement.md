# Break Statement — C++

Le mot-clé **`break`** permet de **sortir immédiatement d'une boucle** (`for`, `while`, `do...while`) ou d'un `switch`.

👉 Dès que C++ rencontre `break`, il **arrête la boucle** et passe au code qui vient après.

---

## 1. Exemple simple avec `for`

```cpp
for (int i = 1; i <= 10; i++) {

    if (i == 5) {
        break;
    }

    cout << i << endl;
}
```

Résultat :

```text
1
2
3
4
```

### 🧠 Que se passe-t-il ?

```text
i = 1 → afficher
i = 2 → afficher
i = 3 → afficher
i = 4 → afficher
i = 5 → break ❌
```

Dès que `i == 5`, `break` dit :

> **« Arrête la boucle maintenant. »**

---

## 2. `break` avec `while`

```cpp
int i = 1;

while (i <= 10) {

    if (i == 6) {
        break;
    }

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

Même principe : lorsque `i` vaut `6`, `break` sort de la boucle.

---

## 3. Exemple avec une saisie utilisateur

Un cas très courant :

```cpp
int number;

while (true) {

    cout << "Enter a number (0 to stop): ";
    cin >> number;

    if (number == 0) {
        break;
    }

    cout << "You entered: " << number << endl;
}
```

Ici :

```text
Enter a number: 5
You entered: 5

Enter a number: 8
You entered: 8

Enter a number: 0
→ break
→ fin de la boucle
```

### Pourquoi `while(true)` ?

`true` signifie que la condition est toujours vraie :

```cpp
while (true)
```

Donc normalement, la boucle serait infinie.

Mais :

```cpp
if (number == 0)
    break;
```

permet de **sortir volontairement** de la boucle.

---

## 4. `break` dans une boucle imbriquée

C'est important avec les **Nested Loops**.

```cpp
for (int i = 1; i <= 3; i++) {

    for (int j = 1; j <= 5; j++) {

        if (j == 3) {
            break;
        }

        cout << j << " ";
    }

    cout << endl;
}
```

Résultat :

```text
1 2
1 2
1 2
```

⚠️ Le `break` arrête **seulement la boucle dans laquelle il se trouve**.

Ici :

```cpp
for (int j ...)
```

est arrêtée, mais la boucle `i` continue.

---

## 🔑 À retenir

```text
break = SORTIR IMMÉDIATEMENT DE LA BOUCLE
```

Exemple :

```cpp
if (condition) {
    break;
}
```

La différence avec une condition normale :

```text
Condition false → la boucle s'arrête naturellement
break           → tu forces la sortie immédiatement
```

### 🧠 Phrase à mémoriser

> **`break` = "Stop the loop now!"**
