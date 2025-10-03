#include <iostream> 
using namespace std; 

int main() { 
    int h,b ; 
    
    cout << "Enter the h and b of the triangle: "; 
    cin >> h,b ; 
    
    for (int i = h; i >= 1; i--) { 
        for (int j = 1; j <= i; j++) { 
            cout << "* "; 
        } 
        cout << endl; 
    } 
    
    return 0; 
    
} 
