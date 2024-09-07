#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exp);
double squareRoot(double value);
double factorial(int n);
double sinFunction(double angle);
double cosFunction(double angle);
double tanFunction(double angle);
double logFunction(double value);
double log10Function(double value);
double expFunction(double value);

int main() {
    int choice;
    double num1, num2;
    int intNum;

    cout << "Scientific Calculator Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "6. Square Root\n";
    cout << "7. Factorial\n";
    cout << "8. Sine (sin)\n";
    cout << "9. Cosine (cos)\n";
    cout << "10. Tangent (tan)\n";
    cout << "11. Natural Logarithm (log)\n";
    cout << "12. Logarithm base 10 (log10)\n";
    cout << "13. Exponential (exp)\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: // Addition
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << add(num1, num2) << endl;
            break;

        case 2: // Subtraction
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << subtract(num1, num2) << endl;
            break;

        case 3: // Multiplication
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << multiply(num1, num2) << endl;
            break;

        case 4: // Division
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                cout << "Result: " << divide(num1, num2) << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;

        case 5: // Power
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            cout << "Result: " << power(num1, num2) << endl;
            break;

        case 6: // Square Root
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0) {
                cout << "Result: " << squareRoot(num1) << endl;
            } else {
                cout << "Error: Negative input for square root!" << endl;
            }
            break;

        case 7: // Factorial
            cout << "Enter a non-negative integer: ";
            cin >> intNum;
            if (intNum >= 0) {
                cout << "Result: " << factorial(intNum) << endl;
            } else {
                cout << "Error: Factorial of a negative number is not defined!" << endl;
            }
            break;

        case 8: // Sin
            cout << "Enter angle in radians: ";
            cin >> num1;
            cout << "Result: " << sinFunction(num1) << endl;
            break;

        case 9: // Cos
            cout << "Enter angle in radians: ";
            cin >> num1;
            cout << "Result: " << cosFunction(num1) << endl;
            break;

        case 10: // Tan
            cout << "Enter angle in radians: ";
            cin >> num1;
            cout << "Result: " << tanFunction(num1) << endl;
            break;

        case 11: // Log (base e)
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 > 0) {
                cout << "Result: " << logFunction(num1) << endl;
            } else {
                cout << "Error: Logarithm of non-positive number is not defined!" << endl;
            }
            break;

        case 12: // Log10
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 > 0) {
                cout << "Result: " << log10Function(num1) << endl;
            } else {
                cout << "Error: Logarithm base 10 of non-positive number is not defined!" << endl;
            }
            break;

        case 13: // Exponential
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << expFunction(num1) << endl;
            break;

        case 0: // Exit
            cout << "Exiting program..." << endl;
            return 0;

        default:
            cout << "Invalid choice! Please enter a number between 0 and 13." << endl;
            return 1; // Non-zero return code to indicate error
    }

    return 0;
}

// Function implementations
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
    return a / b;
}

double power(double base, double exp) {
    return pow(base, exp);
}

double squareRoot(double value) {
    return sqrt(value);
}

double factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

double sinFunction(double angle) {
    return sin(angle);
}

double cosFunction(double angle) {
    return cos(angle);
}

double tanFunction(double angle) {
    return tan(angle);
}

double logFunction(double value) {
    return log(value);
}

double log10Function(double value) {
    return log10(value);
}

double expFunction(double value) {
    return exp(value);
}
