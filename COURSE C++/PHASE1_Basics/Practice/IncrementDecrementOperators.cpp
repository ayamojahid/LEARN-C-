#include <iostream>

using namespace std;

int main() {

    // Increment
    int age = 20;

    age++;

    cout << "After increment: " << age << endl;


    // Decrement
    int number = 10;

    number--;

    cout << "After decrement: " << number << endl;


    // Plusieurs increments
    int compteur = 0;

    compteur++;
    compteur++;
    compteur++;

    cout << "Compteur: " << compteur << endl;


    // Plusieurs decrements
    int score = 10;

    score--;
    score--;

    cout << "Score: " << score << endl;


    return 0;
}
