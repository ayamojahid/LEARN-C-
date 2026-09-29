#include <iostream>
#include <string>
using namespace std;
int main() {

    // ===== Variables =====

    int age = 23;              // nombre entier
    float taille = 1.65f;      // nombre décimal
    double prix = 99.99;       // nombre décimal plus précis
    char initiale = 'A';       // un seul caractère
    bool etudiant = true;      // true ou false
    string nom = "Aya";   // texte
    //const uncheachagble 
    const int minut= 60;
    const float PI=3.14;
    // ===== Affichage =====

    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << endl;
    cout << "Taille : " << taille << endl;
    cout << "Prix : " << prix << endl;
    cout << "Initiale : " << initiale << endl;
    cout << "Etudiant : " << etudiant << endl;

  

    return 0;
}