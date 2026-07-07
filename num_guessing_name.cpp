# include <iostream>
#include <ctime>
int main() {

    int num = 0;
    int guess = 0;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 1000) + 1;

    std::cout << "**** NUMBER GUESSING GAME ******\n";

    do{
        std::cout << "Enter a guess between (1-1000): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "the number is smaller!\n";
        }
        else if(guess < num){
            std::cout << "the number is higher!\n";
        }
        else{
            std::cout << "CORRECT! # of tries: " << tries << '\n';
        }

    }while(guess != num);

    std::cout << "**********************************";

    return 0;
}

