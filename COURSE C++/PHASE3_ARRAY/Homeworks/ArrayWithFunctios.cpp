#include <iostream>
using namespace std;

void Readgrades(float grades[3]) {
    cout << "Please Enter Grade1 : \n";
    cin >> grades[0];

    cout << "Please Enter Grade1 : \n";
    cin >> grades[1];

    cout << "Please Enter Grade1 : \n";
    cin >> grades[2];


}

float CalculeAverage(float grades[3] ) {

    return (grades[0] + grades[1] + grades[2])/3  ;

}

int main() {
    float grades[3];
    Readgrades(grades) ;

    cout << "The average of grades is  " << CalculeAverage(grades) ;
    return 0;
}