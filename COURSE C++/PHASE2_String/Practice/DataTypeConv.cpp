#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. Implicit conversion
    double Num1 = 18.99;
    int Num2 = Num1;

    cout << "Implicit: " << Num2 << endl;


    // 2. Explicit conversion
    double Num3 = 25.75;
    int Num4 = static_cast<int>(Num3);

    cout << "Explicit: " << Num4 << endl;


    // 3. String -> int
    string str = "123.456";
    int numInt = stoi(str);

    cout << "String to int: " << numInt << endl;


    // 4. String -> float
    float numFloat = stof(str);

    cout << "String to float: " << numFloat << endl;


    // 5. String -> double
    double numDouble = stod(str);

    cout << "String to double: " << numDouble << endl;


    // 6. int -> String
    int number = 100;
    string text = to_string(number);

    cout << "int to string: " << text << endl;


    // 7. double -> String
    double price = 19.99;
    string priceText = to_string(price);

    cout << "double to string: " << priceText << endl;


    return 0;
}



/*
```

### Résultat

```text
Implicit: 18
Explicit: 25
String to int: 123
String to float: 123.456
String to double: 123.456
int to string: 100
double to string: 19.990000
```

### 🧠 À retenir

```text
double → int       = casting
string → int       = stoi()
string → float     = stof()
string → double    = stod()
int → string       = to_string()
double → string    = to_string()
```

*/