
#include <iostream>
using namespace std;

int main() {
    string username, password;
    string studentName = "", courseName = "";
    int studentAge = 0;
    int choice = 0;
    bool loggedIn = false;


    for(int i = 1; i <= 3; i++) {
        cout << "Enter Username: "; 
        cin >> username;
        cout << "Enter Password: "; 
        cin >> password;

        
        if(username == "admin" && password == "1234") {
            cout << "Login Successful" << endl;
            loggedIn = true;
            break; 
        } else {
            cout << "Wrong Login" << endl;
        }
    }

    
    if(loggedIn) {
        
        while(choice != 4) {
            cout << "\n--- University Management System ---" << endl;
            cout << "1. Add Student\n2. View Student\n3. Add Course\n4. Exit" << endl;
            cout << "Enter Choice: ";
            cin >> choice;

            if(choice == 1) {
                cout << "Enter Student Name: "; cin >> studentName;
                cout << "Enter Student Age: "; cin >> studentAge;
            } 
            else if(choice == 2) {
                cout << "Student Name: " << studentName << endl;
                cout << "Student Age: " << studentAge << endl;
            } 
            else if(choice == 3) {
                cout << "Enter Course Name: "; cin >> courseName;
            } 
            else if(choice == 4) {
                cout << "Program Exit" << endl;
            } 
            else {
                cout << "Invalid Choice!" << endl;
            }
        }
    } else {
        cout << "Access Denied." << endl;
    }

    
}