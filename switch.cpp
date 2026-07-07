#include <iostream>
using namespace std;

int main (){

int month;
cout << " enter the month: ";
cin >> month;

switch(month) 
{
case 1 : cout << " its jan ua ray ";break;
case 2 : cout << " it is feb ";break;
case 3 : cout << " it is march ";break;
case 4 : cout << " it is april ";break;
case 5 : cout << " it is may ";break;
case 6 : cout << " it is june ";break;
case 7 : cout << " it is july ";break;
case 8 : cout << " it is august ";break;
case 9 : cout << " it is september ";break;
case 10 : cout << " it is october";break;
case 11: cout << " it is november ";break;
case 12: cout << " it is december ";break;
default: cout << " pls enter correct month ";
}


    return 0;
}
