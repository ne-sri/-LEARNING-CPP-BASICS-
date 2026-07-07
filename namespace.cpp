

// namespace provides a solution for preventing name conflict 
// as long as the namespace is different , identical named identities wont conflict 

#include <iostream>

namespace first {
    int x = 3;
}

namespace second {
    int x =4;
}

int main () {

 int x = 0;
 
std::cout << first::x << '\n';
std::cout << second::x << '\n';
std::cout << x << '\n';

// using the [ using namespace ]
/* std::cout likhne se bhi pehle we can write :

using namespace std 
cout << shjgh;
  we have to write this outside of main () {}
 */









//ASSIGNMENT 1 RPG CHARACTER CREATOR 
/*Practice using different data types and reading text strings with spaces.

Inputs: Ask for the character's full name (use std::getline), age (int), health points (double), 
and whether they are a hero (bool).
Output: Print a clean, formatted character profile sheet using the stored variables. */

std::string fullname = "double_helix";
int age = 27;
double healthpoints = 1000000;
bool hero = true;
bool aaminsaan = false;

std::cout << hero << '\n';
std::cout << aaminsaan << '\n';
// in c++ boolean values print numbers by default 
// 1for true ..and 2 for false 
    return 0;
}