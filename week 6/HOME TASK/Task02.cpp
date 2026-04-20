#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[n]; 

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        
        
        if (numbers[i] % 2 == 0) {
            count++;
        }
    }

    cout << "Total Even Numbers: " << count << endl;

    return 0;
}