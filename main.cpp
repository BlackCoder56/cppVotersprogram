#include <iostream>  // This library is required for input and output operations

using namespace std;  // This allows us to use names for objects and variables from the standard library directly

int main()  // The main function where program execution begins
{
    // Initializing variables
    int age = 21;          // Variable to store the age of the person
    bool hasID = true;      // Boolean variable to check if the person has an ID
    bool isRegistered = false;  // Boolean variable to check if the person is registered to vote

    // Using a nested if statement to check multiple conditions
    if(age >= 18 && hasID && isRegistered)  // Checking if the person is 18 or older, has an ID, and is registered to vote
    {
        cout << "You can vote.";  // If all conditions are true, this message will be displayed
    }
    else  // If any of the conditions are false, this block will execute
    {
        cout << "You cannot vote.";  // This message will be displayed if the person cannot vote
    }

    return 0;  // Return statement to indicate the program ended successfully
}
