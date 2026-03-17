#include <iostream>
using namespace std;

int main() {
    int n, num;
    double c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    cout << "Enter the total number of integers (n): ";
    cin >> n;


    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        
        if (num < 200) c1++;
        else if (num <= 399) c2++;
        else if (num <= 599) c3++;
        else if (num <= 799) c4++;
        else c5++;
    }

    
    cout << fixed << setprecision(2);
    cout << (c1 / n) * 100 << "%" << endl;
    cout << (c2 / n) * 100 << "%" << endl;
    cout << (c3 / n) * 100 << "%" << endl;
    cout << (c4 / n) * 100 << "%" << endl;
    cout << (c5 / n) * 100 << "%" << endl;

    return 0;
}