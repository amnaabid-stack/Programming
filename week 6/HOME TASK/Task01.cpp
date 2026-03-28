#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    
    int numbers[n]; 

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum = sum + numbers[i];
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}