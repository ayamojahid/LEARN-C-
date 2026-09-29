# 📦 C++ — Data Types, Sizes & Ranges

Les **data types** (types de données) indiquent à C++ **quel genre de donnée** une variable peut stocker.

Chaque type utilise une certaine quantité de **mémoire** et possède une certaine **plage de valeurs (range)**.

---

## 1️⃣ `int` — nombres entiers

Utilisé pour les nombres **sans décimales**.

```text
10
0
-25
1000
```

Sur une machine moderne, `int` utilise généralement **4 bytes = 32 bits**.

### Range

```text
-2,147,483,648
        ↓
         0
        ↓
2,147,483,647
```

Donc :

> **int = 4 bytes → environ -2,1 milliards à +2,1 milliards**

---

## 2️⃣ `short` — petit entier

Utilisé pour des nombres entiers plus petits.

Généralement :

```text
Size = 2 bytes
      = 16 bits
```

### Range

```text
-32,768 → 32,767
```

Donc :

> **short = 2 bytes → -32 768 à 32 767**

---

## 3️⃣ `long long` — très grand entier

Utilisé pour des nombres entiers très grands.

Généralement :

```text
Size = 8 bytes
      = 64 bits
```

### Range

```text
-9,223,372,036,854,775,808
              ↓
9,223,372,036,854,775,807
```

Donc :

> **long long = 8 bytes → environ ±9,22 quintillions**

---

# 4️⃣ `float` — nombre décimal

Utilisé pour les nombres avec une partie décimale.

Exemples :

```text
3.14
10.5
-2.75
```

Généralement :

```text
Size = 4 bytes
      = 32 bits
```

Il peut représenter des valeurs approximativement de :

```text
±1.18 × 10⁻³⁸
        à
±3.4 × 10³⁸
```

⚠️ Pour `float`, le **range** est très grand, mais la précision est limitée à environ **6–7 chiffres significatifs**.

---

# 5️⃣ `double` — décimal plus précis

`double` sert aussi à stocker des nombres décimaux, mais avec **plus de précision** que `float`.

Généralement :

```text
Size = 8 bytes
      = 64 bits
```

Range approximatif :

```text
±2.23 × 10⁻³⁰⁸
        à
±1.79 × 10³⁰⁸
```

Précision :

```text
environ 15–16 chiffres significatifs
```

👉 Donc :

```text
float  → moins précis
double → plus précis
```

---

# 6️⃣ `char` — un caractère

Utilisé pour **un seul caractère**.

Exemples :

```text
'A'
'B'
'7'
'?'
```

Généralement :

```text
Size = 1 byte
      = 8 bits
```

Pour un `char` signé, le range est généralement :

```text
-128 → 127
```

Pour un `char` non signé :

```text
0 → 255
```

⚠️ Le comportement exact de `char` signé/non signé dépend de l'implémentation.

---

# 7️⃣ `bool` — vrai ou faux

Un `bool` représente seulement deux états :

```text
true
false
```

Conceptuellement :

```text
true  → 1
false → 0
```

Sa taille exacte en mémoire dépend de l'implémentation, mais elle est **généralement 1 byte**.

---

# 8️⃣ `unsigned`

`unsigned` signifie :

> **pas de nombres négatifs.**

Par exemple, un `unsigned int` utilise généralement 4 bytes.

Un `int` :

```text
-2,147,483,648 → 2,147,483,647
```

Un `unsigned int` :

```text
0 → 4,294,967,295
```

Pourquoi ?

Parce que tous les bits peuvent être utilisés pour les valeurs positives.

---

# 🧠 Pourquoi les tailles sont importantes ?

Imagine une boîte 📦.

```text
1 byte
┌──────┐
│  8   │ bits
└──────┘
```

Et :

```text
1 byte = 8 bits
2 bytes = 16 bits
4 bytes = 32 bits
8 bytes = 64 bits
```

Plus tu as de **bits**, plus tu peux représenter de valeurs.

### Exemple :

```text
8 bits
 ↓
256 valeurs possibles
 ↓
0 → 255
```

Avec 16 bits :

```text
16 bits
 ↓
65 536 valeurs possibles
```

Avec 32 bits :

```text
32 bits
 ↓
4 294 967 296 valeurs possibles
```

---

# 📊 Tableau récapitulatif

| Type        | Taille généralement | Utilisation    | Range approximatif |
| ----------- | ------------------: | -------------- | ------------------ |
| `char`      |              1 byte | caractère      | -128 → 127*        |
| `short`     |             2 bytes | petit entier   | -32 768 → 32 767   |
| `int`       |             4 bytes | entier         | -2,1 Md → 2,1 Md   |
| `long long` |             8 bytes | grand entier   | ≈ ±9,22 × 10¹⁸     |
| `float`     |             4 bytes | décimal        | ≈ ±3,4 × 10³⁸      |
| `double`    |             8 bytes | décimal précis | ≈ ±1,79 × 10³⁰⁸    |
| `bool`      | généralement 1 byte | vrai/faux      | `true` / `false`   |

* Pour `char`, la représentation signée dépend de l'implémentation.

---

## ⭐ À retenir

```text
DATA TYPE
    │
    ├── définit le type de donnée
    │
    ├── utilise une certaine mémoire
    │
    └── possède une certaine plage de valeurs
```

Et surtout :

> **Size = combien de mémoire le type utilise.**

> **Range = quelles valeurs le type peut stocker.**

> **Bits → déterminent combien de valeurs différentes peuvent être représentées.**


# Signed et Unsigned en C++

La différence est très simple :

* **`signed`** → peut contenir des nombres **négatifs et positifs**.
* **`unsigned`** → contient seulement des nombres **positifs ou 0**.

---

## 1️⃣ `signed`

Imagine une ligne de nombres :

```text
        négatif       0        positif
           ↓          ↓           ↓
        -100  ...    0    ...   +100
```

Un type `signed` peut aller **dans les deux directions**.

Par exemple, avec un `signed int` de 32 bits :

```text
-2,147,483,648  ───────────→  2,147,483,647
```

Donc :

```text
signed
  ↓
┌─────────────────────────────┐
│ négatif │ 0 │    positif    │
└─────────────────────────────┘
```

---

## 2️⃣ `unsigned`

`unsigned` signifie **sans signe négatif**.

Donc :

```text
0 ─────────────────────────→ positif
```

Avec un `unsigned int` de 32 bits :

```text
0 ─────────────────────────→ 4,294,967,295
```

Donc :

```text
unsigned
    ↓
┌─────────────────────────────┐
│  0  │       positif         │
└─────────────────────────────┘
```

---

## 3️⃣ Pourquoi `unsigned` peut aller plus loin ?

Prenons **8 bits** pour comprendre facilement.

### Signed — 8 bits

Il doit représenter :

```text
négatif + 0 + positif
```

Range :

```text
-128 → 127
```

### Unsigned — 8 bits

Il n'a pas besoin de représenter les négatifs :

```text
0 → 255
```

Schéma :

```text
8 bits
  │
  ├── signed
  │     ↓
  │   -128 ─────── 0 ─────── 127
  │
  └── unsigned
        ↓
        0 ───────────────── 255
```

👉 **Même taille : 8 bits**, mais les valeurs disponibles sont réparties différemment.

---

## 4️⃣ Exemple avec `int`

```text
signed int
4 bytes = 32 bits
        ↓
-2,147,483,648 → 2,147,483,647
```

```text
unsigned int
4 bytes = 32 bits
        ↓
0 → 4,294,967,295
```

---

## 🧠 Exemple dans la vraie vie

### Âge

Un âge ne peut normalement pas être négatif :

```text
0 → 120
```

On pourrait donc utiliser un type **unsigned**.

### Température

Une température peut être négative :

```text
-10°C
0°C
25°C
```

Donc un type **signed** est adapté.

---

# ⭐ À retenir

```text
SIGNED
   ↓
négatif + zéro + positif
   ↓
-10  -5  0  5  10


UNSIGNED
   ↓
zéro + positif
   ↓
0  5  10  15
```

👉 **Signed = avec signe → négatif possible.**

👉 **Unsigned = sans signe négatif → seulement 0 et positif.**

![Logo du projet](dataTypeUgsigned4.png.png)
![Logo du projet](dataTypeUgsigned1.png.png)
![Logo du projet](dataTypeUgsigned2.png.png)
![Logo du projet](dataTypeUgsigned3.png.png)
