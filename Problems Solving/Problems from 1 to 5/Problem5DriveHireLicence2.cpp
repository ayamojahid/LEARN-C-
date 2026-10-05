/*
Write a program to ask the user to enter his/her:
· Age
· Driver license

Then Print "Hired" if his/her age is greater than 21 and s/he
has a driver license, otherwise Print "Rejected"

AND if he/she has a recommendation, he/she is Hired.
*/

#include <iostream>
#include <string>
using namespace std;


// STRUCT
// Cette structure regroupe toutes les informations
// concernant la personne dans une seule variable.
//
// Au lieu d'avoir :
// int Age;
// bool HasDrivingLicence;
// bool HasRecommendation;
//
// séparément, on crée un seul objet stInfo
// qui contient toutes ces informations.
struct stInfo
{
    int Age;
    bool HasDrivingLicence;
    bool HasRecommendation;
};


// READ INFO
// Cette fonction sert uniquement à demander les informations
// à l'utilisateur.
//
// Elle retourne une structure stInfo contenant
// toutes les informations saisies.
stInfo ReadInfo()
{
    stInfo Info;

    // Lire l'âge
    cout << "Please enter your Age : " << endl;
    cin >> Info.Age;

    // Lire si la personne possède un permis.
    //
    // 1 = Yes / true
    // 0 = No / false
    cout << "Do you have a driver Licence : " << endl;
    cin >> Info.HasDrivingLicence;

    // Lire si la personne possède une recommandation.
    //
    // 1 = Yes / true
    // 0 = No / false
    cout << "Do you have a recommendation? (1 for Yes, 0 for No)"
         << endl;

    cin >> Info.HasRecommendation;


    // Retourner toutes les informations.
    //
    // Sans cette ligne, ReadInfo() ne pourrait pas
    // transmettre les informations à la fonction suivante.
    return Info;
}


// IS ACCEPTED
// Cette fonction décide si la personne est acceptée ou non.
//
// Elle retourne :
// true  → Hired
// false → Rejected
bool IsAccepted(stInfo Info)
{
    // PREMIER CAS :
    // Si la personne possède une recommandation,
    // elle est directement acceptée.
    //
    // HasRecommendation est un bool :
    // true  = 1
    // false = 0
    if (Info.HasRecommendation)
    {
        return true;
    }


    // DEUXIÈME CAS :
    // Si elle n'a PAS de recommandation,
    // elle doit respecter LES DEUX conditions :
    //
    // 1. Age > 21
    // 2. HasDrivingLicence == true
    //
    // && signifie AND = ET
    //
    // Donc les deux conditions doivent être vraies.
    return (Info.Age > 21 && Info.HasDrivingLicence);
}


// PRINT RESULT
// Cette fonction affiche simplement le résultat.
//
// Elle ne décide pas elle-même si la personne est acceptée.
// Elle demande cette information à IsAccepted().
void PrintResult(stInfo Info)
{
    // Appeler IsAccepted() pour connaître le résultat.
    //
    // Si IsAccepted() retourne true :
    //     Hired
    //
    // Sinon :
    //     Rejected
    if (IsAccepted(Info))
    {
        cout << "\nHired" << endl;
    }
    else
    {
        cout << "\nRejected" << endl;
    }
}


int main()
{
    // Les fonctions sont exécutées de l'intérieur vers
    // l'extérieur :
    //
    // 1. ReadInfo()
    //    → demande Age, Licence, Recommendation
    //
    // 2. IsAccepted()
    //    → vérifie les conditions
    //
    // 3. PrintResult()
    //    → affiche Hired ou Rejected
    //
    PrintResult(ReadInfo());

    return 0;
}



/*
                 Recommendation ?
                  /            \
                YES             NO
                 ↓               ↓
               Hired       Age > 21 AND Licence ?
                              /          \
                            YES           NO
                             ↓             ↓
                           Hired        Rejected
*/