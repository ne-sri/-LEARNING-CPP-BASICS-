#include <iostream>
int main () {
std::string name;
int age;
std::cout << "whats your name ?" << '\n';
std::getline(std::cin, name);
// std::cin >> name;
std::cout << "hello " << name << '\n';

std::cout << " whats your age ?" << '\n';
std::cin >> age;
std::cout << " oohhh my you are " << age << "years old";

    return 0;
}