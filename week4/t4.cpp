#include <iostream>
using namespace std;
main()
{
    int redRose, whiteRose, tulips;
    float Pricered = 2.00, Pricewhite = 4.10, Pricetulips = 2.50;
    float originalPrice , finalAmount;
    cout <<"red Rose:";
    cin>> redRose;
    cout <<"white Rose:";
    cin>>whiteRose;
    cout <<"tulips:";
    cin>>tulips;
    originalPrice = (redRose * Pricered ) + (whiteRose * Pricewhite) + (tulips * Pricetulips);
    if(originalPrice > 200){
    float discount = originalPrice * 0.20;
    finalAmount = originalPrice - discount;
    cout << "\nOriginal Price: " << originalPrice ;
        cout << "Price after Discount: " << finalAmount ;
    }
    else{cout << "\nOriginal Price: " << originalPrice << endl;
        cout << "Total Payable Amount: " << originalPrice << endl;
    
      }
    }


