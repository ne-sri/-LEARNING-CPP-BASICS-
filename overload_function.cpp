#include <iostream>

/*   functions share the same name but differ in their
 parameter lists (number, type, or order of parameters).*/

 /*The function does some work (prints a message),
  but it does not give a result back to main().*/

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
    //bakePizza();
    //bakePizza("pepperoni");
    //bakePizza("pepperoni", "mushroom");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}

