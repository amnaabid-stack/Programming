#include <iostream>
#include <string> 
using namespace std;

int main() {
    int choice = 0;
    string bookName;

    while (choice != 5) {
        cout << "--- Library System ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> bookName;
            cout << "You added a book: " << bookName << endl << endl;
        }
        else if (choice == 2) {
            cout << "You selected: View Book." << endl << endl;
        }
        else if (choice == 3) {
            cout << "You selected: Borrow Book." << endl << endl;
        }
        else if (choice == 4) {
            cout << "You selected: Issue Book." << endl << endl;
        }
        else if (choice == 5) {
            cout << "Exiting Library System. Goodbye!" << endl;
        }
    }

    return 0;
}