
// ## 2️⃣ By Reference

// Maintenant on ajoute `&` :

// ```cpp

#include <iostream>
using namespace std;

void change(int &x)
{
    x = 100;
}

int main()
{
    int number = 10;

    change(number);

    cout << number << endl;

    return 0;
}


/*
```

### Résultat

```text
100
```

Pourquoi ?

```text
number = 10
    ↑
    │
    x
```

`x` représente directement `number`.

Donc :

```cpp
x = 100;
```

change aussi :

```text
number = 100
```

---

## 🧠 La différence en une ligne

```cpp
void change(int x)    // By Value → copie
```

```cpp
void change(int &x)   // By Reference → original
```

### À retenir

**By Value → original ne change pas**

**By Reference → original peut changer**

*/