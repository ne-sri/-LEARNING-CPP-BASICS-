// TYPE CONVERSION
//                   IMPLICIT = automatic
//                   EXPLICIT = value mein new datatype dalkar . new datatype implement hota h 


#include <iostream>
int main (){

//double x = 3.14;
double y = (int) 3.14;           //here the decimal value wont be taken 
char x = 100;                    // 100 is converted into a character which is d 
int questions = 10;
int correct = 8; 
int percentage = (double )correct/questions * 100; 

std::cout << x << '\n';
std::cout << y << '\n';
std::cout << percentage << '\n';

    return 0;
}
