#include <iostream>
using namespace std;

int main (){

int age;
cout << "enter your age ";
cin >> age;


if(age>=95)
{cout << " gurll u too old ... go touch some grass  :} ";}

else if(age >=18)
{cout << "welcome to the site";}

// if(age<=18)
//     {cout << " age restricted content";}


else if(age<=5)
{ cout << "complete the kindergarden and then come back " ;}


else {
    cout << "you must be atleast 18 to enter ";
}
    return 0;
}