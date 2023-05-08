#include <iostream>
using namespace std;

int main() {
    int choice;
    int price;
    int prices[5];
    int n = 0;
    string products[5];
    string productName, target;
    while (true) {
        cout << "Welcome to the super cool products system\n";
        cout << "Please choose one of the options: \n";
        cout << "1-Add Product\n";
        cout << "2-Remove Product\n";
        cout << "3-Product List\n";
        cin >> choice;
        system("cls");
        switch (choice) {
            case 1:
                cout << "Enter the product name\n";
                cin >> productName;
                products[n]=productName;
                n++;
                cout << "Enter the product price\n";
                cin >> price;
                prices[n]=price;
                n++;
                cout << "Product: " << productName << " " << "has been added with price of: " << price << endl;
                break;
            case 2:
                cout << "Enter the name of the product to be removed:\n";
                cin >> target;
                for (int i = 0; i < n; i++) {
                    if (products[i] == target) {
                        // remeber this --very useful
                        for (int j = i; j < n - 1; j++) {
                            products[j] = products[j + 1];
                            prices[j] = prices[j + 1];
                        }
                        n--;
                        cout << "Product " << target << " successfully removed!\n";
                        break;
                    }
                    if (i == n - 1) {
                        // no product found - remember to do something else
                        cout << "Product " << target << " not found.\n";
                    }
                }
                break;
            case 3:
                cout << "Product List:\n";
                for (int i = 0; i < n; i++) {
                        cout << products[i] << " - Price: " << prices[i] << endl;
                }
                break;
            default:
                cout << "Invalid option\n";
                break;
        }
    }

    return 0;
}
