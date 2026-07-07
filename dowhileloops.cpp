#include <iostream>
int main () {
int number;

    // std::cout << "enter a positive number";
    // std::cin >> number;

 do{
    std::cout << "enter a positive number";
    std::cin >> number;
}
while (number < 0);


std :: cout << "the # is " << number;




    return 0;
}