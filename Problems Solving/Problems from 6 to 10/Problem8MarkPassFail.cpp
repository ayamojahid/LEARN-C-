/*Exercise
Write a program to ask the user to enter his/her exam mark.
Then:
If the mark is 50 or greater, print "You Passed".
Otherwise, print "You Failed".
Use an enum enPassFail with two values:
Pass
Fail
Create the following functions:
ReadMark() → reads the mark.
CheckMark() → checks whether the mark is Pass or Fail.
PrintResults() → prints the final result.*/

#include <iostream>
#include <string>
using namespace std;
enum enPassFail{Pass = 1 , Fail = 0 };

int ReadMark() {
int mark;
  cout << "Enter your Exam Mark : ";
  cin >> mark;

  return mark;
}

enPassFail CheckMark(int mark) {
    if(mark >= 50) {
        return enPassFail::Pass;
    }
    return enPassFail::Fail;
}

void PrintResults(enPassFail result) {
if (result == enPassFail::Pass) cout << " You Passed. " ;
else cout << " You Failed. " ;
}

int main(){
PrintResults(CheckMark(ReadMark()));
return 0; 
}