
#include <iostream>
#include <string>

using namespace std;

int main() {

    // ===== Variables =====

    string nom;
    int age;
    float taille;
    double prix;
    char initiale;
    bool etudiant;

    // ===== Input =====

    cout << "Entrez votre nom : ";
    getline(cin, nom);

    cout << "Entrez votre age : ";
    cin >> age;

    cout << "Entrez votre taille : ";
    cin >> taille;

    cout << "Entrez le prix : ";
    cin >> prix;

    cout << "Entrez votre initiale : ";
    cin >> initiale;

    cout << "Etes-vous etudiant ? (1 = Oui, 0 = Non) : ";
    cin >> etudiant;


    // ===== Output =====

    cout << endl;
    cout << "===== Vos informations =====" << endl;

    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << endl;
    cout << "Taille : " << taille << endl;
    cout << "Prix : " << prix << endl;
    cout << "Initiale : " << initiale << endl;
    cout << "Etudiant : " << etudiant << endl;


    return 0;
}