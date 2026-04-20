#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    string books[100];
    int bookCount = 0;


    do {
        cout << "\n--- Library System Menu ---" << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. Exit" << endl; 
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter book name: ";
                cin >> books[bookCount];
                bookCount++;
                cout << "Book added successfully!" << endl;
                break;

            case 2:
                cout << "\nList of Books:" << endl;
                for (int i = 0; i < bookCount; i++) {
                    cout << i + 1 << ". " << books[i] << endl;
                }
                break;

            case 3:
                cout << "Borrowing system coming soon..." << endl;
                break;

            case 4:
                cout << "Exiting system..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}