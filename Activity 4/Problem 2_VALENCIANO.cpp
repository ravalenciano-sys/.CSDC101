Problem 2: Weather-Based Discounts

Problem:
You want to attract more customers. If it’s hot (temperature is 30°C or more), offer a 20% discount.

Task:
Write a program that:
Ask for the temperature.

Sets the price to:
$0.80 if temperature >= 30
$1.00 otherwise
Outputs the final price.

Sample Input:
Enter today's temperature in Celsius: 32

Sample Output:

It's hot! Lemonade costs $0.80 today.


#include <iostream> 
using namespace std; 

int main(){ 
    
    double Temperature;
    double Price;
    
    cout << "Enter today's Temperature in Celsius" << endl; 
    cin>> Temperature; 
    
    if (Temperature >= 30) { 
        Price = 0.80; 
        cout << "It's hot! Lemonade costs $ today" << endl; 
    }else{ 
        Price = 1.00; 
        cout << "Lemonade costs $" << endl; 
    return 0; 
} 
} 

