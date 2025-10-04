Problem:
The player moves depending on the pressed button. Player starts at (0,0).

Task:


Write a program that:
Lets the player change coordinates depending on the button pressed.
W =  0, +1
S = 0, -1
A = -1,0
D = +1,0 

Sample Input:
W


Sample Output:
The location of the player is ( 0, 1)


#include <iostream> 
using namespace std; 

int main() 
{ 
    
    int x = 0, y = 0; 
    char move; 
    
    cout << "Enter movement key (W/A/S/D): "; 
    cin >> move; 
    move = toupper(move); 
    
    if (move == 'W') { 
        y += 1; 
    } else if (move == 'S') { 
        y -= 1; 
    } else if (move == 'A') { 
        x -= 1; 
    } else if (move == 'D') { 
        x += 1; 
    } else { 
        cout << "Invalid Input" << endl; 
        
    return 1; 
    } 
    
    cout << "The location of the player is (" << x << ", " << y << " )" << endl; 
    
    return 0; 
} 
