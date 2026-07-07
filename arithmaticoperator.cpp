// operation (+ - * /)
#include <iostream>
int main () {
int students = 5 + 4 * 78 / 2;

//HOW OPERATION IS APPLIED 
//     PARENTHESIS
//     MULTIPLICATION & DIVISION 
//     ADDITION & SUBTRACTION


// ADDITION 
//students = students + 1;           ANOTHER WAY TO DO IT 
//students+=1;                       // SIMPLER WAY TO WRITE IT 
//students++;                         // USED FOR ADDING ONE NUMBER 

//SUBTRACTION 
// students = students - 1;
// students-=2;                          // SIMPLER WAY TO DO IT 
// students--;                           // USED FOR ONLY ONE SUBTRACTION

// MULTIPLICATION 
// students = students * 1234;     
// students*=1234;                       // EASY METHOD 

// DIVISION 
// students = students / 5;
// students/= 2;

// FOR REMAINDER 
double remainder = students % 4;    // (%) only int is used for this thus define the main portion with int 

std::cout << students << '\n';
std::cout << remainder;

    return 0;
}