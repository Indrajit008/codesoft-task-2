#include <iostream>
using namespace std;

float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

int main() {
    float num1, num2, result;
    char choice;

    do {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        cout << "\nSelect operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice (1/2/3/4/5): ";
        cin >> choice;

        switch (choice) {
            case '1':
                result = add(num1, num2);
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '2':
                result = subtract(num1, num2);
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '3':
                result = multiply(num1, num2);
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '4':
                if (num2 != 0) {
                    result = divide(num1, num2);
                    cout << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Cannot divide by zero." << endl;
                }
                break;
            case '5':
                cout << "Exiting the calculator program." << endl;
                break;
            default:
                cout << "Invalid input. Please enter a valid choice." << endl;
        }

    } while (choice != '5');

    return 0;
}

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}
