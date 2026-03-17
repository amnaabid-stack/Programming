#include <iostream>
using namespace std;

int main() {
    int age, toyPrice;
    double machinePrice, savedMoney = 0, currentGift = 10.0;
    int toysCount = 0;

    cout << "Enter age: "; cin >> age;
    cout << "Enter washing machine price: "; cin >> machinePrice;
    cout << "Enter toy price: "; cin >> toyPrice;

    
    for (int i = 1; i <= age; i++) {
        if (i % 2 != 0) {
            toysCount++;
        } else {
            savedMoney += (currentGift - 1.0);
            currentGift += 10.0; 
        }
    }

    
    savedMoney += (toysCount * toyPrice);


    if (savedMoney >= machinePrice) {
        cout << "Yes! " << (savedMoney - machinePrice) << endl;
    } else {
        cout << "No! " << (machinePrice - savedMoney) << endl;
    }

    return 0;
}