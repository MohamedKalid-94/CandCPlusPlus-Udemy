#include <iostream>
using namespace std;

int main() {
    // Declare and initialize variables
    int dividend = 10;
    int divisor = 0;
    int result = 0;

    // Use try-catch block for exception handling
    try {
        // Check if divisor is zero before performing division
        if (divisor == 0) {
            // Throw an error message if division by zero is attempted
            throw "Division by zero is not allowed.";
        } else {
            // Perform division if divisor is not zero
            result = dividend / divisor;
            cout << "Result: " << result << endl;
        }
    }
    // Catch block to handle thrown exceptions
    catch (const char* error) {
        // Display the error message
        cout << "Error: " << error << endl;
    }

    return 0;
}
