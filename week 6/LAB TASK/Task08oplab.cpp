#include <iostream>
using namespace std;

int main() {
    
    int size1 = 2;
    int arr1[size1];
    
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> size1; 

    cout << "Enter 2 elements for the first array, one per line:" << endl;
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    
    int size2;
    cout << "Enter the number of elements for the second array: ";
    cin >> size2;

    int arr2[size2];
    cout << "Enter " << size2 << " elements for the second array, one per line:" << endl;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    
    int resultSize = size1 + size2;
    int resultArr[resultSize];

    
    resultArr[0] = arr1[0];

    
    for (int i = 0; i < size2; i++) {
        resultArr[i + 1] = arr2[i]; 
    }

    
    resultArr[resultSize - 1] = arr1[1];

    
    cout << "Resulting array: [";
    for (int i = 0; i < resultSize; i++) {
        cout << resultArr[i];
        if (i < resultSize - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}