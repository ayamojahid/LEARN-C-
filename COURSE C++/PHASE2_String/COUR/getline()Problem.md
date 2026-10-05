# Solving the `getline()` Problem

En C++, le problème de `getline()` arrive souvent quand on utilise **`cin >>` juste avant `getline()`**.

### 🔴 Le problème

```cpp
int age;
string name;

cin >> age;
getline(cin, name);
```

Si tu écris :

```text
20
Aya Mojahid
```

`getline()` peut récupérer seulement une ligne vide.

### Pourquoi ?

Quand tu fais :

```cpp
cin >> age;
```

C++ lit `20`, mais **la touche Enter (`\n`) reste dans le buffer**.

Ensuite :

```cpp
getline(cin, name);
```

lit directement ce `\n`, donc il pense que tu as entré une ligne vide.

---

### ✅ La solution

Utilise :

```cpp
cin.ignore();
```

avant `getline()` :

```cpp
int age;
string name;

cout << "Enter your age: ";
cin >> age;

cin.ignore();

cout << "Enter your full name: ";
getline(cin, name);

cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
```

### 🧠 À retenir

```text
cin >>       → lit un mot / une valeur
getline()    → lit toute la ligne
cin.ignore() → enlève le Enter restant
```

Donc, quand tu as :

```cpp
cin >> quelque_chose;
getline(cin, quelque_chose);
```

pense à :

```cpp
cin.ignore();
```

avant `getline()`.
