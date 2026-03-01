#include<iostream>
using namespace std;
main()

{
    int n, w, h, result;

    cout << "Enter paint area: ";
    cin >> n;

    cout << "Enter width: ";
    cin >> w;

    cout << "Enter height: ";
    cin >> h;
 
    result = n / (w * h);

    cout << "Walls painted = " << result << endl;
}