#include <iostream>
using namespace std;
main()
{
    int temperature1 , temperature2;
    cout <<"Enter the temperature of 1st city: ";
    cin >> temperature1;
    cout <<"Enter the temperature of 2nd city: ";
    cin >> temperature2;
    if(temperature1 - temperature2 > 10)
    {
        cout << "Difference is too Big";
    }
    else if (temperature2 - temperature1 > 10)
    {
        cout << "Difference is too Big";
    }
    
}