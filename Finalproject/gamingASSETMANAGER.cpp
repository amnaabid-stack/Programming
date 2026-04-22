#include <iostream>
#include <string>
using namespace std;

int main() {

    string name[100], category[100];
    int id[100], stock[100];
    float price[100];

    string history[200];
    string myItems[50];

    int total = 0;
    int myIndex = 0;
    int historyIndex = 0;

    int mainChoice = 0;

    while (mainChoice != 3) {

        cout << "\n===== ADMIN / USER SYSTEM =====\n";
        cout << "1 Admin\n2 User\n3 Exit\nEnter: ";
        cin >> mainChoice;

        // ================= ADMIN =================
        if (mainChoice == 1) {

            int choice = 0;

            while (choice != 10) {

                cout << "\n===== ADMIN MENU =====\n";
                cout << "1 Add\n2 View\n3 Update\n4 Delete\n5 Sort\n6 Low Stock\n7 Total Value\n8 History\n9 Info\n10 Logout\nEnter: ";
                cin >> choice;

                // ADD
                if (choice == 1) {
                    cout << "Name: "; cin >> name[total];
                    cout << "ID: "; cin >> id[total];
                    cout << "Price: "; cin >> price[total];
                    cout << "Stock: "; cin >> stock[total];
                    cout << "Category: "; cin >> category[total];

                    history[historyIndex++] = "Added: " + name[total];
                    total++;
                }

                // VIEW
                else if (choice == 2) {
                    for (int i = 0; i < total; i++) {
                        cout << id[i] << "\t" << name[i] << "\t"
                             << price[i] << "\t" << stock[i] << "\t"
                             << category[i] << endl;
                    }
                }

                // UPDATE
                else if (choice == 3) {
                    int x, found = 0;
                    cout << "Enter ID: ";
                    cin >> x;

                    for (int i = 0; i < total; i++) {
                        if (id[i] == x) {
                            cout << "New Price: "; cin >> price[i];
                            cout << "New Stock: "; cin >> stock[i];
                            cout << "Updated\n";
                            found = 1;
                            break;
                        }
                    }

                    if (!found) cout << "Not found\n";
                }

                // DELETE
                else if (choice == 4) {
                    int x, found = 0;
                    cout << "Enter ID: ";
                    cin >> x;

                    for (int i = 0; i < total; i++) {
                        if (id[i] == x) {

                            for (int j = i; j < total - 1; j++) {
                                name[j] = name[j + 1];
                                id[j] = id[j + 1];
                                price[j] = price[j + 1];
                                stock[j] = stock[j + 1];
                                category[j] = category[j + 1];
                            }

                            total--;
                            cout << "Deleted\n";
                            found = 1;
                            break;
                        }
                    }

                    if (!found) cout << "Not found\n";
                }

                
                else if (choice == 5) {

                    for (int i = 0; i < total - 1; i++) {
                        for (int j = i + 1; j < total; j++) {

                            if (price[i] > price[j]) {

                                float tPrice = price[i];
                                price[i] = price[j];
                                price[j] = tPrice;

                                string tName = name[i];
                                name[i] = name[j];
                                name[j] = tName;

                                int tId = id[i];
                                id[i] = id[j];
                                id[j] = tId;

                                int tStock = stock[i];
                                stock[i] = stock[j];
                                stock[j] = tStock;

                                string tCat = category[i];
                                category[i] = category[j];
                                category[j] = tCat;
                            }
                        }
                    }

                    cout << "Sorted\n";
                } // LOW STOCK
                else if (choice == 6) {
                    for (int i = 0; i < total; i++) {
                        if (stock[i] < 5)
                            cout << "Low stock: " << name[i] << endl;
                    }
                }

                // TOTAL VALUE
                else if (choice == 7) {
                    float sum = 0;
                    for (int i = 0; i < total; i++) {
                        sum += price[i] * stock[i];
                    }
                    cout << "Total Value: " << sum << endl;
                }

                // HISTORY
                else if (choice == 8) {
                    for (int i = 0; i < historyIndex; i++) {
                        cout << history[i] << endl;
                    }
                }

                else if (choice == 9) {
                    cout << "Admin system info\n";
                }
            }
        }

        // ================= USER =================
        else if (mainChoice == 2) {

            int choice = 0;

            while (choice != 10) {

                cout << "\n===== USER MENU =====\n";
                cout << "1 View\n2 Buy\n3 My Items\n4 Category\n5 Sort\n6 Latest\n7 Status\n8 Info\n9 Help\n10 Logout\nEnter: ";
                cin >> choice;

                // VIEW
                if (choice == 1) {
                    for (int i = 0; i < total; i++) {
                        cout << name[i] << "\t" << price[i] << "\t" << category[i] << endl;
                    }
                }

                // BUY
                else if (choice == 2) {
                    int x, found = 0;
                    cout << "Enter ID: ";
                    cin >> x;

                    for (int i = 0; i < total; i++) {
                        if (id[i] == x) {
                            found = 1;

                            if (stock[i] > 0) {
                                stock[i]--;
                                myItems[myIndex++] = name[i];
                                cout << "Bought\n";
                            } else {
                                cout << "Out of stock\n";
                            }
                            break;
                        }
                    }

                    if (!found) cout << "Not found\n";
                }

                // MY ITEMS
                else if (choice == 3) {
                    for (int i = 0; i < myIndex; i++) {
                        cout << myItems[i] << endl;
                    }
                }

                // CATEGORY
                else if (choice == 4) {
                    string cat;
                    cout << "Enter category: ";
                    cin >> cat;

                    for (int i = 0; i < total; i++) {
                        if (category[i] == cat)
                            cout << name[i] << endl;
                    }
                }

                
                else if (choice == 5) {

                    for (int i = 0; i < total - 1; i++) {
                        for (int j = i + 1; j < total; j++) {
 if (price[i] > price[j]) {

                                float tPrice = price[i];
                                price[i] = price[j];
                                price[j] = tPrice;

                                string tName = name[i];
                                name[i] = name[j];
                                name[j] = tName;

                                int tId = id[i];
                                id[i] = id[j];
                                id[j] = tId;

                                int tStock = stock[i];
                                stock[i] = stock[j];
                                stock[j] = tStock;

                                string tCat = category[i];
                                category[i] = category[j];
                                category[j] = tCat;
                            }
                        }
                    }

                    cout << "Sorted\n";
                }

                // LATEST
                else if (choice == 6) {
                    if (total > 0)
                        cout << "Latest: " << name[total - 1] << endl;
                }

                // STATUS
                else if (choice == 7) {
                    cout << "Total items: " << total << endl;
                }

                else if (choice == 8) {
                    cout << "System info\n";
                }

                else if (choice == 9) {
                    cout << "Help: contact admin\n";
                }
            }
        }
    }

    return 0;
}