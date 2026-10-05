//the cout object together with the << operator is used to output values/print text

#include <iostream>



int main() {
std::cout << "aya mojahid" ;
std::cout << "this is my first c++ program";
return 0; 
}

//to insert a new line you can use the \n character

#include <iostream>
int main() {
std::cout << "aya mojahid\n" ;
std::cout << "this is my first c++ program";
return 0; 
}

//another wa to usert  new line is with the std::endl manipulator

#include <iostream>
int main() {
std::cout << "aya mojahid " << std::endl ;
std::cout << "this is my first c++ program";
return 0; 
}

//print multiple message in one line
#include <iostream>
int main() {
std::cout << "aya" << "mojhaud\n";
std::cout << "m1" << "m2" << "m3";
return 0; 
}

