#include <iostream>
using namespace std;
main()
{
    int number, tens, ones;
    cout <<"Enter Number: ";
    cin >> number;
    if (number == 100)
    {
        cout << "One Hundred";
    }
    else if (number == 0)
    {
        cout << "Zero";
    }
    else {
        tens = number/10;
        ones = number % 10;
        if (tens == 1)
        {
            if (ones == 0)
            {
                cout << "Ten";
            }
            
            else if (ones == 1)
            {
                cout << "Eleven";
            }
            else if (ones == 2)
            {
                cout << "Tweleve";
            }
            else if (ones == 3)
            {
                cout << "Thirteen";
            }
            else if (ones == 4)
            {
                cout << "Fourteen";
            }
            else if (ones == 5)
            {
                cout << "Fifteen";
            }
            else if (ones == 6)
            {
                cout << "Sixteen";
            }
            else if (ones == 7)
            {
                cout << "Seventeen";
            }
            else if (ones == 8)
            {
                cout << "Eighteen";
            }
            else if (ones == 9)
            {
                cout << "Ninteen";
            }

        }
        
        else if (tens == 2)
        {
            cout << "Twenty ";
        }
        else if (tens == 3)
        {
            cout << "Thirty ";
        }
            else if (tens == 4)
        {
            cout << "Fourty ";
        }
            else if (tens == 5)
        {
            cout << "Fifty ";
        }
            else if (tens == 6)
        {
            cout << "Sixty ";
        }
            else if (tens == 7)
        {
            cout << "Seventy ";
        }
            else if (tens == 8)
        {
            cout << "Eighty ";
        }
            else if (tens == 9)
        {
            cout << "Ninty ";
        }

        if (ones == 1)
        {
            cout << "One";
        }
        else if (ones == 2)
        {
            cout << "Two";
        }
        else if (ones == 3)
        {
            cout << "Three";
        }
        else if (ones == 4)
        {
            cout << "Four";
        }
        else if (ones == 5)
        {
            cout << "Five";
        }
        else if (ones == 6)
        {
            cout << "Six";
        }
        else if (ones == 7)
        {
            cout << "Seven";
        }
        else if (ones == 8)
        {
            cout << "Eight";
        }
        else if (ones == 9)
        {
            cout << "Nine";
        }
    }
    
}