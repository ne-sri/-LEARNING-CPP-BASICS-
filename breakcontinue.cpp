#include <iostream>
int main (){

// break = break out of a loop
// continue = skip current iteration

for(int i= 1 ; i<= 10 ; i++){
if (i== 5){
    // break;
    continue;
}
std::cout << i << '\n';
}




    return 0;
}