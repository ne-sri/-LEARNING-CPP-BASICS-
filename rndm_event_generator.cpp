#include <iostream>
#include <ctime>

int main()
{
    srand(time(0)); // here 0 gives a changing value every secong 
    //and srand() sets the seed for random number generation
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "You win a bumper sticker!\n";
                break;
        case 2: std::cout << "You win a t-shirt!\n";
                break;
        case 3: std::cout << "You win a free lunch!\n";
                break;
        case 4: std::cout << "You win a gift card!\n";
                break;
        case 5: std::cout << "You win concert tickets!\n";
                break;
    }

    return 0;
}
//rand() % 5 + 1; 
/* gets number from 1-5
%5 gives 0-4
and +1 shifts to 1-5 */
