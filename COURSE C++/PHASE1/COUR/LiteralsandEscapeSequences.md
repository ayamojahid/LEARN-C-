Bien 👍 On va prendre **chaque type**, avec un exemple très simple.

# 1️⃣ Literals

Un **literal** est une **valeur écrite directement dans le programme**.

### 🔢 Integer literal — nombre entier

Un nombre **sans virgule**.

```text
25
100
-7
```

Exemple : `25` représente directement la valeur **25**.

➡️ **Integer literal = nombre entier écrit directement.**

---

### 🔢 Floating-point literal — nombre décimal

Un nombre avec une **partie décimale**.

```text
3.14
10.5
-2.7
```

Exemple : `3.14` représente directement la valeur **3,14**.

➡️ **Floating-point literal = nombre décimal écrit directement.**

---

### 🔤 Character literal — caractère

Un **seul caractère**, généralement entre apostrophes `' '`.

```text
'A'
'B'
'7'
'?'
```

Exemple :

```text
'A'
```

représente **un seul caractère : A**.

⚠️ `'A'` et `"A"` ne sont pas la même chose :

```text
'A'   → caractère
"A"   → texte (chaîne)
```

---

### 📝 String literal — texte

Une suite de caractères entre guillemets `" "`.

```text
"Hello"
"Bonjour Aya"
"12345"
```

Exemple :

```text
"Hello"
```

représente le texte **Hello**.

➡️ Même `"12345"` est un **texte**, pas un nombre.

---

### ✅ Boolean literal — vrai ou faux

Il y a seulement deux valeurs :

```text
true
false
```

* `true` → vrai
* `false` → faux

➡️ **Boolean literal = valeur logique.**

---

# 2️⃣ Escape Sequences

Une **escape sequence** commence par un **backslash `\`**.

Elle permet de représenter quelque chose de spécial dans un texte.

---

### ↩️ `\n` — nouvelle ligne

```text
Hello\nWorld
```

Résultat :

```text
Hello
World
```

➡️ `\n` signifie **passer à la ligne suivante**.

---

### ↹ `\t` — tabulation

```text
Name:\tAya
```

Résultat approximatif :

```text
Name:    Aya
```

➡️ `\t` ajoute un **espace de tabulation**.

---

### `\"` — afficher un guillemet

Normalement, `"` sert à **délimiter un texte**.

Avec `\"`, on indique :

> Je veux afficher le caractère `"`.

Exemple :

```text
She said: \"Hello\"
```

Résultat :

```text
She said: "Hello"
```

➡️ `\"` = **guillemet comme caractère**.

---

### `\'` — afficher une apostrophe

Permet de représenter une apostrophe `'` dans certains contextes.

```text
It\'s
```

Résultat :

```text
It's
```

➡️ `\'` = **apostrophe comme caractère**.

---

### `\\` — afficher un backslash

Le symbole `\` est utilisé pour commencer une escape sequence.

Donc pour représenter réellement un `\`, on utilise :

```text
\\
```

Résultat :

```text
\
```

➡️ `\\` = **un vrai backslash**.

---

### `\0` — caractère nul

`\0` représente le **caractère nul**.

Il est surtout utilisé pour **indiquer la fin d'une chaîne de caractères dans certains contextes en C/C++**.

➡️ `\0` ≠ le nombre `0`.

---

# 🧠 Résumé

```text
LITERALS
│
├── 25          → entier
├── 3.14        → décimal
├── 'A'         → caractère
├── "Hello"     → texte
└── true/false  → booléen
```

```text
ESCAPE SEQUENCES
│
├── \n   → nouvelle ligne
├── \t   → tabulation
├── \"   → "
├── \'   → '
├── \\   → \
└── \0   → caractère nul
```

### ⭐ La différence principale

> **Literal = une valeur directement écrite.**

> **Escape sequence = une notation spéciale pour représenter un caractère ou une action spéciale.**
