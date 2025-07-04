#include <iostream>
using namespace std;

// Define a structure named 'Person'
struct Person {
    string name; // String variable to store the person's name
    int age;     // Integer variable to store the person's age
};

int main() {
    // Create a 'Person' structure variable
    Person person1;

    // Assign values to the 'person1' fields
    person1.name = "Kalid";
    person1.age = 31;

    // Declare a pointer to a 'Person' structure
    Person* personPtr;

    // Point the pointer to the address of 'person1'
    personPtr = &person1;

    // Use the pointer to access and display the structure's data
    cout << "Name: " << personPtr->name << endl;
    cout << "Age: "  << personPtr->age  << endl;

    return 0; // End of program
}
