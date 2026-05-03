#include <iostream>
#include <string>
using namespace std;

// ======================================================
// ADMIN FUNCTIONS 
// ======================================================
void adminAdd(string name[], int id[], float price[], int stock[], string category[], string history[], int &total, int &hIndex) {
    cout << "Enter Name: "; cin >> name[total];
    cout << "Enter ID: "; cin >> id[total];
    cout << "Enter Price: "; cin >> price[total];
    cout << "Enter Stock: "; cin >> stock[total];
    cout << "Enter Category: "; cin >> category[total];
    string log = "Action: Added " + name[total];
    history[hIndex++] = log;
    total++;
}

void adminView(string name[], int id[], float price[], int stock[], string category[], int total) {
    cout << "\nID\tName\tPrice\tStock\tCategory\n";
    for (int i = 0; i < total; i++) {
        cout << id[i] << "\t" << name[i] << "\t" << price[i] << "\t" << stock[i] << "\t" << category[i] << endl;
    }
}

void adminUpdate(int id[], float price[], int stock[], int total) {
    int x; bool f = false;
    cout << "Enter ID to update: "; cin >> x;
    for (int i = 0; i < total; i++) {
        if (id[i] == x) {
            cout << "New Price: "; cin >> price[i];
            cout << "New Stock: "; cin >> stock[i];
            f = true; break;
        }
    }
    if(!f) cout << "Not Found!\n";
}

void adminDelete(string name[], int id[], float price[], int stock[], string category[], int &total) {
    int x; bool f = false;
    cout << "Enter ID to delete: "; cin >> x;
    for (int i = 0; i < total; i++) {
        if (id[i] == x) {
            for (int j = i; j < total - 1; j++) {
                name[j] = name[j+1]; id[j] = id[j+1]; price[j] = price[j+1];
                stock[j] = stock[j+1]; category[j] = category[j+1];
            }
            total--; f = true; break;
        }
    }
}

void adminSort(string name[], int id[], float price[], int stock[], string category[], int total) {
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (price[i] > price[j]) {
                float tp = price[i]; price[i] = price[j]; price[j] = tp;
                int ti = id[i]; id[i] = id[j]; id[j] = ti;
                int ts = stock[i]; stock[i] = stock[j]; stock[j] = ts;
                string tn = name[i]; name[i] = name[j]; name[j] = tn;
                string tc = category[i]; category[i] = category[j]; category[j] = tc;
            }
        }
    }
    cout << "Inventory Sorted.\n";
}

void adminLowStock(string name[], int stock[], int total) {
    for (int i = 0; i < total; i++) if (stock[i] < 5) cout << "Low: " << name[i] << endl;
}

void adminTotalValue(float price[], int stock[], int total) {
    float sum = 0;
    for (int i = 0; i < total; i++) sum += (price[i] * stock[i]);
    cout << "Value: " << sum << endl;
}

void adminHistory(string history[], int hIndex) {
    for (int i = 0; i < hIndex; i++) cout << history[i] << endl;
}

void adminInfo() {
    cout << "System Version 1.0.4 - Admin Mode\n";
}

// ======================================================
// USER FUNCTIONS 
// ======================================================

void userBuy(string name[], int id[], int stock[], string myItems[], int total, int &myIndex) {
    int x; bool found = false;
    cout << "Enter ID to Buy: "; cin >> x;
    for (int i = 0; i < total; i++) {
        if (id[i] == x) {
            found = true;
            if (stock[i] > 0) {
                stock[i]--;
                myItems[myIndex++] = name[i];
                cout << "Successfully Purchased!\n";
            } else cout << "Out of stock!\n";
            break;
        }
    }
    if(!found) cout << "Not Found!\n";
}

void userCategorySearch(string name[], string category[], int total) {
    string cat;
    cout << "Enter Category: "; cin >> cat;
    for (int i = 0; i < total; i++) {
        if (category[i] == cat) cout << "- " << name[i] << endl;
    }
}

// ======================================================
// MAIN
// ======================================================

int main() {
    string name[100], category[100], history[200], myItems[50];
    int id[100], stock[100];
    float price[100];
    int total = 0, myIndex = 0, historyIndex = 0, choice = 0;

    while (choice != 3) {
        cout << "\n1. Login Admin\n2. Login User\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            int adminChoice = 0;
            while (adminChoice != 10) {
                cout << "\n===== ADMIN MENU =====\n";
                cout << "1 Add\n2 View\n3 Update\n4 Delete\n5 Sort\n6 Low Stock\n7 Total Value\n8 History\n9 Info\n10 Logout\nChoice: ";
                cin >> adminChoice;
                if (adminChoice == 1) adminAdd(name, id, price, stock, category, history, total, historyIndex);
                else if (adminChoice == 2) adminView(name, id, price, stock, category, total);
                else if (adminChoice == 3) adminUpdate(id, price, stock, total);
                else if (adminChoice == 4) adminDelete(name, id, price, stock, category, total);
                else if (adminChoice == 5) adminSort(name, id, price, stock, category, total);
                else if (adminChoice == 6) adminLowStock(name, stock, total);
                else if (adminChoice == 7) adminTotalValue(price, stock, total);
                else if (adminChoice == 8) adminHistory(history, historyIndex);
                else if (adminChoice == 9) adminInfo();
            }
        }
        else if (choice == 2) {
            int userChoice = 0;
            while (userChoice != 10) {
                cout << "\n===== USER MENU =====\n";
                cout << "1 View\n2 Buy\n3 My Items\n4 Search Category\n5 Latest Item\n6 Status\n7 Info\n8 Help\n9 Sort View\n10 Logout\nChoice: ";
                cin >> userChoice;

                if (userChoice == 1) adminView(name, id, price, stock, category, total);
                else if (userChoice == 2) userBuy(name, id, stock, myItems, total, myIndex);
                else if (userChoice == 3) {
                    for(int i=0; i<myIndex; i++) cout << i+1 << ". " << myItems[i] << endl;
                }
                else if (userChoice == 4) userCategorySearch(name, category, total);
                else if (userChoice == 5) {
                    if(total > 0) cout << "Latest: " << name[total-1] << endl;
                }
                else if (userChoice == 6) cout << "Total Items Available: " << total << endl;
                else if (userChoice == 7) cout << "User System v1.0\n";
                else if (userChoice == 8) cout << "Contact Admin for Help\n";
                else if (userChoice == 9) adminSort(name, id, price, stock, category, total);
            }
        }
    }
    return 0;
}