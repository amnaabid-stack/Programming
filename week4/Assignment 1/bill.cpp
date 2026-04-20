#include<iostream>
using namespace std;

int main()
{
         double bill, discountedBill;
    
          cout << "Enter your bill: ";
          cin >> bill;

         if (bill <= 5000) {
         discountedBill = bill - (bill * 0.05);
       }
       else {
    
          discountedBill = bill - (bill * 0.10);
       }

          cout << "Your discounted bill is: " << discountedBill;
    
    
}