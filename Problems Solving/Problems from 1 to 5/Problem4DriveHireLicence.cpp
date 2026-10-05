/*
Write a program to ask the user to enter his/her:
· Age
· Driver license

Then Print "Hired" if his\her age is grater than 21 and s/he
has a driver license, otherwise Print "Rejected" */

#include <iostream>
#include <string>
using namespace std;

struct stInfo {
    int Age;
    bool HasDrivingLicence;
};

stInfo ReadInfo() {
    stInfo Info;

    cout << "Please enter your Age : " ;
    cin >> Info.Age;
    
    cout << "Do you have a driver Licence : ";
    cin >> Info.HasDrivingLicence;

    return Info;
}

bool IsAccepted(stInfo Info) {
    return (Info.Age > 21 && Info.HasDrivingLicence) ;
}

void PrintResult(stInfo Info) {
if (IsAccepted(Info)) {
    cout << "\n Hired" << endl;
}
else 
    cout << "\n Rejected" << endl;
 
}

int main() {
    PrintResult(ReadInfo());
    return 0;
}