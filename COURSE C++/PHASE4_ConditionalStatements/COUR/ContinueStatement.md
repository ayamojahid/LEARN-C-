# 🔄 Continue Statement — C++

`continue` permet de **sauter l'itération actuelle** d'une boucle et de passer directement à l'itération suivante.

### 🧠 Différence avec `break`

| Statement  | Action                            |
| ---------- | --------------------------------- |
| `break`    | 🛑 Arrête complètement la boucle  |
| `continue` | ⏭️ Saute seulement le tour actuel |

### 1️⃣ Exemple simple avec `for`

```cpp
for (int i = 1; i <= 5; i++) {

    if (i == 3) {
        continue;
    }

    cout << i << endl;
}
```

**Résultat :**

```text
1
2
4
5
```

Quand `i == 3` :

```text
1 → affiche
2 → affiche
3 → continue ⏭️
4 → affiche
5 → affiche
```

👉 **3 n'est pas affiché**, mais la boucle continue.

---

### 2️⃣ Exemple avec `while`

```cpp
int i = 0;

while (i < 5) {

    i++;

    if (i == 3) {
        continue;
    }

    cout << i << endl;
}
```

**Résultat :**

```text
1
2
4
5
```

⚠️ Avec `while`, fais attention à modifier `i` **avant `continue`**, sinon tu peux créer une boucle infinie.

### 🧠 À retenir

**`continue` = "Saute ce tour et continue."** ⏭️

```text
1 → 2 → 3 ⏭️ → 4 → 5
```
