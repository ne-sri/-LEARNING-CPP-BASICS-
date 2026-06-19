#include <iostream>
#include <cstdlib> // reuired for s rand and rand
#include <ctime> //required for time()

int main()
{
    // pseudo-random = NOT truly random (but close)
    // srand = pesudo random
    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}

