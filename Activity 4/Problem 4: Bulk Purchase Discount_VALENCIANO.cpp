Problem 4: Bulk Purchase Discount

Problem:
Customers get discounts based on how many cups they buy:
1–4 cups: No discount
5–9 cups: 10% discount
10+ cups: 20% discount
Each cup is $1.

Task:

Write a program that:
Ask how many cups the customer wants.
Calculates the total cost with the correct discount.
Outputs the final price.

Sample Input:
How many cups? 7

Sample Output:
Total cost: $6.30

  
#include <iostream> 
using namespace std; 

int main() 
{ 
    
    int cups, totalcost; 
    
    cout << "Input how many cups you want: \n"; 
    cin >> cups; 
    
    if (cups >= 10) { 
        totalcost = cups * 1.0 * 0.8; 
    } else if (cups >= 5) { 
        totalcost = cups * 1.0 * 0.9; 
    } else { 
        totalcost = cups * 1.0; 
    } 
    
    cout << "totalcost: " << totalcost << endl; 
    
    return 0; 
    
} 
