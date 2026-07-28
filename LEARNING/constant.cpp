#include <iostream>
int main () {

// constant variable specifies that the variable value is constant 
// complier doesnt modify anything in it (read only type of stuff)
// read only cant be changed 

const double pie = 3.14; // (const double here will not allow to change the value of pie ) 
double radius = 10;
double circumference = 2 * pie * radius;
double area = pie * radius * radius;
std::cout << " the area of the circle is " << area << "cm^2" << ('\n');
std::cout << "the circumference is " << circumference << "cm " << ('\n');


//system configuration 
// ASSIGNMENT 1

/* goal : practise naming coversation and scoping 
task : define constant . write small conditional statements that checks is a user's 
login attempts have exceeded maximum allowed*/


// {{bool only gives true or false }}
// [[if statements ]]

 const int max_login = 3;
 const int user_attempts = 2;
if (user_attempts > max_login)  { std::cout << "account locked !" << '\n';}
if (user_attempts < max_login)  { std::cout << " access granred !";}

    return 0;
}
