/*. Convert string st1 = "43.22" to double, float, and int.
. Convert integer N1 = 20 to string.
. Convert double N2 =33.5 to string.
. Convert float N3 = 55.23 to string, and integer. */

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string st1="43.22";
    double numDouble = stod(st1);

    cout << "String to double: " << numDouble << endl;
    
    float numfloat = stof(st1);
    cout << "String to float: " << numfloat << endl;
    
    int numInt = stoi(st1);
    cout << "String to int: " << numInt << endl;

    int N1 = 20;

    string text  =to_string(N1);
    cout << "int to string: " << text << endl;

    double N2 =33.5;
    string text1  =to_string(N2);
    cout << "double to string: " << text1 << endl;
     

    float  N3 = 55.23;
    string text2  =to_string(N3);
    cout << "float to string: " << text1 << endl;
    
        int n3int = (int)N3;

    cout << "float to integer: " << n3int << endl;


    

}