/*Write a program to do the following:

Read 5 numbers and sum them up as long as the number is below 50 use for
loop and continue statement.

Input:
10
20
55
10
20

Output: 60

NO */
#include <iostream>
using namespace std;

int main() {
    int numbers;
    int sum = 0 ;
    for(int i = 1 ; i<=5 ; i++) {
       cout << "Enter number  " << i << "  :  " ;
       cin >> numbers;
       if(numbers >= 50 ) {
        continue;
       }
       sum+=numbers;
    }
    cout << "Sum is " << sum;
}