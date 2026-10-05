
#include <iostream>

using namespace std;

int main() {

    // =========================
    // 1. ARITHMETIC OPERATORS
    // =========================

    int a = 10;
    int b = 3;

    cout << "Addition       : " << a + b << endl;
    cout << "Subtraction    : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    cout << "Division        : " << a / b << endl;
    cout << "Modulo         : " << a % b << endl;


    // =========================
    // 2. ASSIGNMENT OPERATORS
    // =========================

    int x = 10;

    x += 5;   // x = x + 5
    cout << "x += 5 : " << x << endl;

    x -= 2;   // x = x - 2
    cout << "x -= 2 : " << x << endl;

    x *= 2;   // x = x * 2
    cout << "x *= 2 : " << x << endl;

    x /= 2;   // x = x / 2
    cout << "x /= 2 : " << x << endl;

    x %= 3;   // x = x % 3
    cout << "x %= 3 : " << x << endl;


    // =========================
    // 3. INCREMENT / DECREMENT
    // =========================

    int count = 5;

    count++;
    cout << "count++ : " << count << endl;

    count--;
    cout << "count-- : " << count << endl;


    // =========================
    // 4. COMPARISON OPERATORS
    // =========================

    int n1 = 10;
    int n2 = 5;

    cout << "n1 == n2 : " << (n1 == n2) << endl;
    cout << "n1 != n2 : " << (n1 != n2) << endl;
    cout << "n1 > n2  : " << (n1 > n2) << endl;
    cout << "n1 < n2  : " << (n1 < n2) << endl;
    cout << "n1 >= n2 : " << (n1 >= n2) << endl;
    cout << "n1 <= n2 : " << (n1 <= n2) << endl;


    // =========================
    // 5. LOGICAL OPERATORS
    // =========================

    bool p = true;
    bool q = false;

    cout << "p && q : " << (p && q) << endl;
    cout << "p || q : " << (p || q) << endl;
    cout << "!p     : " << (!p) << endl;


    // =========================
    // 6. CONDITIONAL OPERATOR
    // =========================

    int age = 20;

    int result = (age >= 18) ? 1 : 0;

    cout << "Ternary result : " << result << endl;


    return 0;
}


// ### Résumé des operators

// | Category                  | Operators                    |   |       |
// | ------------------------- | ---------------------------- | - | ----- |
// | **Arithmetic**            | `+` `-` `*` `/` `%`          |   |       |
// | **Assignment**            | `=` `+=` `-=` `*=` `/=` `%=` |   |       |
// | **Increment / Decrement** | `++` `--`                    |   |       |
// | **Comparison**            | `==` `!=` `>` `<` `>=` `<=`  |   |       |
// | **Logical**               | `&&` `                       |   | ` `!` |
// | **Ternary**               | `? :`                        |   |       |

// ⚠️ À retenir :
// `=` **affecte une valeur** → `x = 10`
// `==` **compare deux valeurs** → `x == 10`
