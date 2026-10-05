// ## 1️⃣ By Value


#include <iostream>
using namespace std;

void change(int x)
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
10
```

Pourquoi ?

```text
number = 10
    ↓
   copie
    ↓
x = 10
    ↓
x = 100
```

👉 Seule la **copie** `x` change.

Donc :

```text
number = 10
```

---
*/
