#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n]; 
    int currentSize = 0; 

    cout << "Enter " << n << " numbers, one per line:" << endl;

    
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;

        
        if (isAlreadyEntered(numbers, currentSize, input)) {
            cout << "Already Entered: " << input << endl;
        } else {
            
            numbers[currentSize] = input;
            currentSize++;
        }
    }

    
    cout << "Unique numbers entered: ";
    for (int i = 0; i < currentSize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}