// this program is going to implement a simple terminal calculator that can add, subtract, multiply, and divide any number of digits, handles decimal numbers, use a menu and repeats until the user chooses Exit

// Your terminal calculator should:

// 1. Ask for the first number
// 2. Ask for the second number
// 3. Ask for the operation
//     * +
//     * -
//     * *
//     * /
// 4. Perform the calculation
// 5. Display the result
// 6. Have a menu
// 7. Keep running until the user chooses Exit
// 8. Handle division by zero

#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cerr << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    cout << "\n Welcome to the David's Simple Terminal Calculator!" << endl;

    cout << "--------------------------------------------------" << endl;
    cout << "                  CALCULATOR MENU                 " << endl;
    cout << "--------------------------------------------------" << endl;
    cout << " 1. Addition (+)" << endl;
    cout << " 2. Subtraction (-)" << endl;
    cout << " 3. Multiplication (*)" << endl;
    cout << " 4. Division (/)" << endl;
    cout << " 5. Exit" << endl;

    double a;
    cout << "Enter the first number: ";
    cin >> a;

    double b;
    cout << "Enter the second number: ";
    cin >> b;

    int choice;
    cout << "Enter the operation (1-5: remember that 5 is to EXIT the calculator): ";
    cin >> choice;

    double result;

    if (choice == 1) {
        result = add(a, b);
        cout << "Result: " << result << endl;
    } else if (choice == 2) {
        result = subtract(a, b);
        cout << "Result: " << result << endl;
    } else if (choice == 3) {
        result = multiply(a, b);
        cout << "Result: " << result << endl;
    } else if (choice == 4) {
        result = divide(a, b);
        cout << "Result: " << result << endl;
    } else if (choice == 5) {
        cout << "Exiting the calculator. Goodbye!" << endl;
    } else {
        cout << "Invalid choice. Please try again." << endl;
    }
}