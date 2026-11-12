// This Code is written by; Daksh Goswami ( A CS Major Student From Galgotias University ) 
#include <iostream>
using namespace std;

int main() {
    int a, b, choice;   
    do {
        cout << "\n    BASIC CALCULATOR\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
            cin >> choice;

        if (choice == 5) {
            cout << "Exiting calculator...";
                break;
        }
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice!\n";
                continue;
        }

        cout << "Enter two numbers: ";
            cin >> a >> b;

        switch (choice) {
            case 1:
                cout << "Addition = " << a + b;
                    break;
            case 2:
                cout << "Subtraction = " << a - b;
                    break;
            case 3:
                cout << "Multiplication = " << a * b;
                    break;
            case 4:
                if (b == 0) {
                    cout << "Cannot divide by zero!";
                } else {
                    cout << "Division = " << a / b;
                }
                    break;
            }
        } while (true);
    return 0;
}
