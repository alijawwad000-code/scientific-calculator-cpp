#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "==============================\n";
    cout << "  SCIENTIFIC CALCULATOR (C++) \n";
    cout << "==============================\n";

    do {
        cout << "\nSelect Operation:\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Square Root (vx)\n";
        cout << "6. Power (x^y)\n";
        cout << "7. Sine (sin)\n";
        cout << "8. Cosine (cos)\n";
        cout << "9. Tangent (tan)\n";
        cout << "10. Log base 10 (log)\n";
        cout << "11. Natural Log (ln)\n";
        cout << "0. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result = " << num1 + num2;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result = " << num1 - num2;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result = " << num1 * num2;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 == 0)
                    cout << "Error! Division by zero.";
                else
                    cout << "Result = " << num1 / num2;
                break;

            case 5:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result = " << sqrt(num1);
                break;

            case 6:
                cout << "Enter base and power: ";
                cin >> num1 >> num2;
                cout << "Result = " << pow(num1, num2);
                break;

            case 7:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result = " << sin(num1 * 3.14159 / 180);
                break;

            case 8:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result = " << cos(num1 * 3.14159 / 180);
                break;

            case 9:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result = " << tan(num1 * 3.14159 / 180);
                break;

            case 10:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result = " << log10(num1);
                break;

            case 11:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result = " << log(num1);
                break;

            case 0:
                cout << "Exiting calculator...\n";
                break;

            default:
                cout << "Invalid choice!";
        }

        cout << "\n------------------------------\n";

    } while(choice != 0);

    return 0;
}

