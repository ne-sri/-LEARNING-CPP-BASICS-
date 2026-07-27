// typedef = gives keyword to a complex datatype 
             //helps with typability and reduces typos 
            // they are used only to create alias for types (input or blueprints) and not on outputs (ex:cout)
            

// using = another keyword like typedef 
         // used more as it is more popular for templates             



#include <iostream>

// typedef std::string pagal_t;

// int main () {
//     pagal_t scooty = "mene_le_liya";
// std::cout << scooty;
//     return 0;
// }




// ASSIGNMENT 

int main () {

typedef std::string i_t;
typedef int d_t;
typedef double c_t;
typedef char p_t;

i_t name = "simba";
d_t level = 68;
c_t health = 77;
p_t rank = 'A';

std::cout << name << '\n';
std::cout << level << '\n';
std::cout << health <<'\n';
std::cout << rank << '\n';


return 0;
}














