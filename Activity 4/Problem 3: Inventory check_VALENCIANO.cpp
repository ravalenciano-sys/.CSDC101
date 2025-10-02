Problem 3: Inventory Check

Problem:
You can only sell lemonade if you have lemons and sugar.

Task:
Write a program that:

Ask the user how many lemons and how many cups of sugar they have.
If either lemons or sugar is 0 or less, 
	output: "You can't make lemonade!"
Otherwise,
	output: "You're ready to sell lemonade!"

Sample Input:
Lemons: 5
Sugar: 0

Sample Output:
You can't make lemonade!


#include <iostream> 
using namespace std; 

int main(){ 
    
    int Lemons, Sugar; 
    
    cout << "GAWAAN NG LEMONADA" << endl; 
    cout << "Lagay mo ilang lemons gusto mo boy"; 
    cin >> Lemons; 
    cout << "Lagay mo ilang sugars gusto mo boy"; 
    cin >> Sugar; 
    cout << "Pakihintay po ha" << endl; 
    
    if (Lemons <= 0 || Sugar <= 0){ 
        cout << "Pwede kana mag sell ng lemonade!"; 
    }else{ 
        cout << "Di ka makakagawa ng lemonade sorry!"; 
        
    } 
    return 0; 
} 
