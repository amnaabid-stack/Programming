#include<iostream>
using namespace std;
main()
{
    string name;
    float dollars, finalPrice;
    cout << "enter the name of country:";
    cin >> name;
    cout <<" enter amount in dollars:";
    cin >> dollars;
    if (name == "Ireland")
    {
        finalPrice = dollars * 90 / 100;
    }
    else if( name == "ireland")
    {
        finalPrice = dollars * 90 / 100;

    }
        else
    {
        finalPrice = dollars * 95 / 100;
    }

    cout << "Final Ticket Price: " << finalPrice;

}