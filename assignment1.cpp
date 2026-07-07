#include <iostream>
int main () {
//only using basic whole numbers

int items = 3;
double price = 4.50;
double total = items * price;
std::cout << "the total price is " << total << '\n';

/*create an int variable for enemieskilled and set it to 12
int variable for ponitsperenemy ans set it to 1.5 
create a double variable and set it to 1.5 
calculate the total score by multiplying all together 
print the final score to the screen with a nice message */

int enemieskilled = 12;
int pointsperenemy = 150;
double multiplier = 1.5;
double total12 = enemieskilled * pointsperenemy * multiplier;
std::cout << "congratulations your total score is " << total12 << '\n';


/* the e commerce checkout calculator 


calculate the final price a customer has to pay after accounting for quantity,shipping costs,
 discount , sales tax */


double itemprice = 99.9;
int quantity = 3;
double shippingcost = 5.50;
double discount = 15.00;
double taxrate = 0.08;
 
double rate1 = (itemprice * quantity) - discount;
double rate2 = rate1 + (rate1 * taxrate ) + shippingcost;

std::cout << "RECEIPT" << '\n';
std::cout << " subtotal " << rate1 << '\n';
std::cout << " tax " << taxrate << '\n';
std::cout << " shipping " << shippingcost << '\n';
std::cout << " total bill " << rate2; 


 return 0;
}