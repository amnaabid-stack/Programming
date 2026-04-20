
#include <iostream>
using namespace std;
 main() 
 {
    string type;
    double a, b, area;
    double pi = 3.14159265359;
    cin >> type;

    if (type == "square") 
    {
        cin >> a;
        area = a * a;
    } 
    else if (type == "rectangle")
     {
        cin >> a >> b;
        area = a * b;
    } 
    else if (type == "circle") 
    {
        cin >> a;
        area = pi * a * a;
    } 
    else if (type == "triangle") 
    {
        cin >> a >> b;
        area = (a * b) / 2;
    }

    cout << area ;


}
