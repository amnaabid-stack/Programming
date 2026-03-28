#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctUser = "admin";
    string correctPass = "1234";
    string enteredUsernames[3]; 
    string pass;
    bool login = false;

    
    string studentNames[3];
    int studentAges[3];
    string courseNames[3];
    
    int studentCount = 0;
    int courseCount = 0;
    int choice;

    for (int i = 0; i < 3; i++) {
        cout << "Enter Username: ";
        cin >> enteredUsernames[i];
        cout << "Enter Password: ";
        cin >> pass;


        if (enteredUsernames[i] == correctUser && pass == correctPass) {
            login = true;
            cout << "Login Successful!\n";
            break;
        } else {
            cout << "Invalid Credentials! Attempts left: " << 2 - i << endl;
        }
    }

    
    if (login) {
        while (true) {
            cout << "\n--- University Management System ---\n";
            cout << "1. Add Student\n";
            cout << "2. View Students\n";
            cout << "3. Add Course\n";
            cout << "4. View Courses\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                if (studentCount < 3) {
                    cout << "Enter Student Name: ";
                    cin >> studentNames[studentCount];
                    cout << "Enter Student Age: ";
                    cin >> studentAges[studentCount];
                    studentCount++;
                    cout << "Student Added Successfully\n";
                } else {
                    cout << "Student limit reached (Max 3)!\n";
                }
            } 
            else if (choice == 2) {
                if (studentCount == 0) {
                    cout << "No students registered yet.\n";
                } else {
                    for (int i = 0; i < studentCount; i++) {
                        cout << "Student " << i + 1 << ": " << studentNames[i] << ", Age: " << studentAges[i] << endl;
                    }
                }
            } 
            else if (choice == 3) {
                if (courseCount < 3) {
                    cout << "Enter Course Name: ";
                    cin >> courseNames[courseCount];
                    courseCount++;
                    cout << "Course Added Successfully\n";
                } else {
                    cout << "Course limit reached (Max 3)!\n";
                }
            } 
            else if (choice == 4) {
                if (courseCount == 0) {
                    cout << "No courses added yet.\n";
                } else {
                    cout << "--- Available Courses ---\n";
                    for (int i = 0; i < courseCount; i++) {
                        cout << i + 1 << ". " << courseNames[i] << endl;
                    }
                }
            } 
            else if (choice == 5) {
                cout << "Thank you! Exiting program...\n";
                break; 
            } 
            else {
                cout << "Invalid choice! Please select between 1-5.\n";
            }
        }
    } 
    else {
        cout << "Too many incorrect attempts. Access Denied.\n";
    }

    return 0;
}