#include <iostream>
using namespace std;
 main() 
 {
    string name1;
    string name2;
    string name3;
    int age1;
    int age2;
    int age3;
    cout << "Enter name of first brother: ";
    cin >> name1;
    cout << "Enter age of first brother: ";
    cin >> age1;
    cout << "Enter name of second brother: ";
    cin >> name2;
    cout << "Enter age of second brother: ";
    cin >> age2;
    cout << "Enter name of third brother: ";
    cin >> name3;
    cout << "Enter age of third brother: ";
    cin >> age3;

    if (age1 <= age2 && age1 <= age3) 
    {
        cout << name1 << " is youngest" ;
    } 
    else if (age2 <= age1 && age2 <= age3)
     {
        cout << name2 << " is youngest" ;
    } 
    else {
        cout << name3 << " is youngest" ;
    }

}

