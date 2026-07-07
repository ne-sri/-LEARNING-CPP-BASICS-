#include <iostream>
 /*iostream is a header file ...jiske andar ki cheeze hum use karte hai 
c++ mein aur bhi hrader file hoti hai  ... program ki functionality incerease karti hai */ 
// (1)iostream input output dene mein halp karti hai BY USING [cout]


int main () { //main is a function here ..entry point for writing a code


// std :: count << shows the output here 
/* '\n' allows system to give outputs in different lines 
another long method of writing this n part is                      */

    int x =1234567890;
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';


//integer type (decimals are not included here )
  // int is for integer here 

int age = 18;
int year = 2025;
int days = 23560;


std::cout << age << '\n';
std::cout << year <<'\n';
std::cout << days <<'\n';


// double (decimal is included here)
/* double is used for such numbers which has DECIMAL in it */

double price = 278.990;
double gpa = 9.8;
double temp = 31.78;


std::cout << price <<'\n';
std::cout << gpa <<'\n';
std::cout << temp <<'\n';


/* single character
CHAR is for SINGLE CHARACTER

for single character we use single quotes('') only 
char can only store a single character  */


char grade = 'F';
char initial = 'h';

std::cout << initial <<'\n';
std::cout << grade <<'\n';


//booleans (true or false)
/* bool is used */

// in c++ boolean values print numbers by default 
// 1for true ..and 2 for false 


bool student = true;
bool power = false;
bool forsale = true;

//strings ( objects that represents a sequence of text )
// in string number,characters,symbols everything can be used.

std::string name = "behan hehehehehehe";
std::string toungetwister = " chandu ki chachi ko chandi ke chamach se chatni chatai ";


std::cout << "hello " << name << '\n';
std::cout << "ghatiya sa chacha jisney " << toungetwister <<'\n';


/* in string kisi ke bhi agge hum sentence add kar sakte hai by (<<''<<) mein daal kar  */
 
// another example 
std::cout << "you are " << age << "old.....ab to naukari karle ghatiya aulad  " << '\n';





    return 0;
}