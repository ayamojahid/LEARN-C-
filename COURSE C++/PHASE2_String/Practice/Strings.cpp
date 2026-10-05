
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Hello World";

    // 1. Afficher
    cout << "Text: " << text << endl;

    // 2. Length
    cout << "Length: " << text.length() << endl;

    // 3. Access character
    cout << "First character: " << text[0] << endl;

    // 4. Change character
    text[0] = 'J';
    cout << "After change: " << text << endl;

    // 5. Add text
    text += " C++";
    cout << "After += : " << text << endl;

    // 6. Find
    cout << "Position of C++: " << text.find("C++") << endl;

    // 7. Substring
    cout << "Substring: " << text.substr(0, 5) << endl;

    // 8. Erase
    text.erase(0, 2);
    cout << "After erase: " << text << endl;

    // 9. Insert
    text.insert(0, "Hi ");
    cout << "After insert: " << text << endl;

    // 10. Replace
    text.replace(0, 2, "Hey");
    cout << "After replace: " << text << endl;

    // 11. Clear
    text.clear();
    cout << "After clear: " << text << endl;

    // 12. Check empty
    cout << "Is empty: " << text.empty() << endl;

    return 0;
}




/*
### 🧠 Les plus importants à mémoriser

```text
text.length()       → longueur
text[0]             → caractère
text += "..."       → ajouter
text.find("...")    → chercher
text.substr(...)    → extraire
text.erase(...)     → supprimer
text.insert(...)    → insérer
text.replace(...)   → remplacer
text.clear()        → vider
text.empty()        → vérifier si vide
```

*/