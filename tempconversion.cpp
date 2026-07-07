#include <iostream>
using std::cout;
using std::cin;

int main (){


double temp;
char unit;

cout<< " **********temp conversion ************" << '\n';
cout <<  "f = Farenite " << '\n';
cout <<  "c = celsius " << '\n';
cout <<  "what unit you would like " << '\n';
cin >> unit;

if (unit == 'f' || unit == 'F' ){
cout << "enter the temperature in celsius";
cin >> temp;
temp = (1.8*temp) + 32.0;
cout << "temperature = " << temp << '\n';

}

else if (unit == 'c' || unit == 'C' ){
cout << "enter the temperature in farenhite";
cin >> temp;
temp = (temp - 32) / 1.8;
cout << "temperature = " << temp << '\n';
}


cout<< "*****************************";
    return 0;
}