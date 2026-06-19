#include <iostream>
int main () 
{
int rows;
int columns;
char symbol;

   std::cout << "How many rows?: ";
   std::cin >> rows;

   std::cout << "How many columns?: ";
   std::cin >> columns;

   std::cout << "Enter a symbol to use: ";
   std::cin >> symbol;

for (int i = 1; i <= rows ; i++){  // outer loop made it run 3 times 
for (int j = 1; j <= columns ; j++){ // inner loop (i=1 : i=10)
std::cout << symbol;
}
std::cout << '\n';
}
 return 0;
}