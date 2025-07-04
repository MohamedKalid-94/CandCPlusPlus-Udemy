#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid std:: prefix

int main() {
    int score; // Declare an integer variable to store the exam score

    // Prompt the user to enter their exam score
    cout << "Enter your exam score: ";
    cin >> score; // Read user input and store it in the 'score' variable

    // Determine if the score is a passing score (60 or above)
    bool isPassing = (score >= 60);

    // Check if the user has passed the exam
    if (isPassing) {
        // If true, display a congratulatory message
        cout << "Congratulations! You have passed the exam." << endl;
    } else {
        // If false, display a message asking the user to try again
        cout << "Sorry, you did not pass the exam. Please try again." << endl;
    }

    return 0; // End of program
}
