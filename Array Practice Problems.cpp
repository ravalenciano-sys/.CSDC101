PROBLEM 1: Check if an Array is Ordered 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool ascending = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            ascending = false;
            break;
        }
    }

    if (ascending)
        cout << "The array is in ascending order." << endl;
    else
        cout << "The array is not in ascending order." << endl;

    return 0;
}


PROBLEM 2: Get the Mean of an Array

#include <iostream> 
using namespace std; 

int main() { 

  int n; 
  cout << "Enter number of elements: "; 
  cint >> n; 

  int arr[n]; 
  cout << "Enter elements: "; 
  for (int i = 0; i < n; i++) { 
      cin >> arr[i]; 
  } 

  int sum = 0;
  for (int i = 0; i < n; i++) { 
      sum += arr [i]; 
  } 

  double mean = static_cast<double>(sum) / n; 
  cout << "Mean = " << mean << endl;

  return 0; 

} 


PROBLEM 3: Move Array Elements (Rotate Right by 1)

#include <iostream> 
using namespace std; 

int main() { 

    int n; 
    cout << "Enter number of elements: "; 
    cin >> n; 

    int arr [n]; 
    cout << "Enter elements: "; 
    for (int i = 0; i < n; i++) { 
        cin >> arr [i]; 
    } 

    int last = arr [n - 1]; 
    for (int i = n - 1; i > 0; i--) { 
        arr[i] = arr[i - 1]; 
    } 

    arr [0] = last; 

    cout << "After rotation: "; 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] < " "; 
    } 
    cout << endl; 

    return 0; 

} 

PROBLEM 4: Describe the Array

#include <iostream> 
using namespace std; 

int main() { 

    int n; 
    cout << "Enter number of elements: ";     
    cin >> n; 

    int arr[n]; 
    cout << "Enter elements: "; 
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    } 

    int min = arr [0]; 
    int max = arr [0]; 
    int sum = 0; 
    int evenCount = 0; 
    int oddCount = 0; 

    for (int i = 0; i < n; i++) { 
        sum += arr[i]; 
    if (arr [i] < min) 
        min = arr [i]; 
    if (arr [i] > max) 
        max = arr [i]; 
    if (arr [i] % 2 == 0) 
        evenCount++; 
    else 
        oddCount++; 
  } 

  cout << "Minimum: " << min << endl; 
  cout << "Maximum: " << max << endl; 
  cout << "Sum: " << sum << endl; 
  cout << "Even numbers: " << evenCount << endl; 
  cout << "Odd numbers: " << oddCount << endl; 

  return 0; 
} 




