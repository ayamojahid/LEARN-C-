//Half Number

#include <iostream>
#include <string>
using namespace std;

int ReadNumber() {
    int Num;
  cout << "Enter number : ";
  cin >> Num;

  return Num;

}

float CalculehalfNumber(int Num) {

    return (float) Num/2;
}

void PrintResults(int Num) {
   
string result = "Half of  " +  to_string(Num)  + " is "  + to_string(CalculehalfNumber(Num)) ;
cout << endl << result << endl;
}

int main() {
    PrintResults(ReadNumber());
    return 0;
}