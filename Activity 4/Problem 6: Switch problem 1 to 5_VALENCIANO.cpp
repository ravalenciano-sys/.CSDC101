Problem 6: Switch problem 1 to 5
Combine all problems using switch statement

Sample Input:
What problem do you want to see? 1

Sample Output:
*Basic pricing Decision Runs*

Submit a cpp file, a link to your github repository, or a notion page.


  #include <iostream> 
using namespace std; 

int main() { 
    
    int choice; 
    
    cout << "What problem do you want to see? ";
    cin >> choice; 
    
    switch (choice) { 
        case 1: 
            cout << "Basic Pricing Decision Runs" << endl; 
            break; 
        case 2: 
            cout << "Inventory Management Simulation Runs" << endl; 
            break; 
        case 3: 
            cout << "Employee Scheduling Algorithm Runs" << endl; 
            break; 
        case 4: 
            cout << "Customer Feedback Analysis Start" << endl; 
            break; 
        case 5: 
            cout <<"Sales Forecasting Tool Executes" << endl; 
            break; 
        default: 
            cout << "Invalid choice. Please select problem from 1 to 5 only." << endl; 
    } 
    
    return 0; 
    
} 
