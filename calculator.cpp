#include <iostream>
using namespace std;
int main () {

char op;
double num1;
double num2;
double result;

cout << "CALCULATOR" << '\n';


cout << "enter either ( + - * /)";
cin >> op;

cout << "enter num1 :" ;
cin >> num1;

cout << "enter num2 :" ;
cin >> num2;

switch(op){
    case '+':
    result = num1 + num2;
    cout << "result =" << result << '\n';
    break;

    case '-':
    result = num1-num2;
    cout << "result =" << result << '\n';
     break;

    case '*':
    result = num1 * num2;
    cout << "result =" << result << '\n';
    break;

    case '/':
    result = num1/num2;
    cout << "result =" << result << '\n';
    break;

    default :
    cout << "write correct values";
    
}



    return 0;
}