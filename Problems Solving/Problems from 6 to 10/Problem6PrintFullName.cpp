//Print fullName

#include <iostream>
#include <string>
using namespace std;

struct stInfo{
 string FirstName;
 string LastName;
};

stInfo ReadInfo() {
    stInfo Info;

     // Prompt the user to enter their first name and store it in the struct.
    cout << "Please Enter Your First Name? " << endl;
    cin >> Info.FirstName;

    // Prompt the user to enter their last name and store it in the struct.
    cout << "Please Enter Your Last Name?" << endl;
    cin >> Info.LastName;

    return Info;
}

string GetfullName(stInfo Info) {
    string FullName ="";
    FullName = Info.FirstName + " " + Info.LastName; 
    return FullName;
}

void PrintFullName(string FullName) {

cout << " Your full name is :  "  << FullName;
}

int main() {

    PrintFullName(GetfullName(ReadInfo()));

    return 0;

}