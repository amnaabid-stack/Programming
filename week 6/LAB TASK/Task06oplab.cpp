#include <iostream>
using namespace std;


int findLargestNumber(int arr[], int size) {
    
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n];
    cout << "Enter " << n << " numbers, one per line:" << endl;

    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    
    int largest = findLargestNumber(numbers, n);

    cout << "The largest number entered is: " << largest << endl;

    return 0;
}