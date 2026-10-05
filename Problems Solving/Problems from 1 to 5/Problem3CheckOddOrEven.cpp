#include <iostream>
#include <string>
using namespace std;


// enum = crée un type qui contient des valeurs ayant un sens.
// Au lieu de travailler directement avec 1 et 2,
// on travaille avec Odd et Even.
//
// Odd  = nombre impair
// Even = nombre pair
enum enNumberType { Odd = 1, Even = 2 };


// Cette fonction sert uniquement à LIRE un nombre.
// Elle ne fait aucun calcul et ne décide pas si le nombre
// est pair ou impair.
//
// Return : le nombre entré par l'utilisateur.
int ReadNumber()
{
    int Num;

    cout << "Please Enter a number : ";
    cin >> Num;

    return Num;
}


// Cette fonction sert uniquement à DÉTERMINER le type du nombre.
//
// Elle reçoit un nombre déjà lu.
// Elle utilise % 2 pour vérifier le reste de la division par 2.
//
// Exemple :
// 10 % 2 = 0  → Even
// 7 % 2 = 1   → Odd
//
// La fonction retourne donc un enNumberType :
// Even ou Odd.
enNumberType CkeckNumberType(int Num)
{
    int Result = Num % 2;

    if (Result == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
}


// Cette fonction sert uniquement à AFFICHER le résultat.
//
// Elle reçoit directement un enNumberType.
// Donc elle ne se préoccupe pas de savoir comment
// on a trouvé le résultat.
void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
    {
        cout << "\nNumber is Even.\n";
    }
    else
    {
        cout << "\nNumber is Odd.\n";
    }
}


int main()
{
    // Les fonctions sont exécutées de l'intérieur vers l'extérieur :
    //
    // 1. ReadNumber()
    //       ↓
    //    lit le nombre
    //
    // 2. CheckNumberType(...)
    //       ↓
    //    détermine Even ou Odd
    //
    // 3. PrintNumberType(...)
    //       ↓
    //    affiche le résultat
    //
    PrintNumberType(CkeckNumberType(ReadNumber()));

    return 0;
}