// C++ provides some pre-defined functions, such as main(), which is used to execute code. But you can also create your own functions to perform certain actions.
// To create(often referred to as declare) a function, specify the name of the function, followed by parentheses()
// Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.
// To call a function, write the function's name followed by two parentheses () and a semicolon ;
// A function can be called multiple times
#include <iostream>
#include <string>
using namespace std;

// Create a function which will return no output
void printPlayers()
{
    string goalkeeper = "Emilio";
    string defender = "Essah";
    string midfielder = "Chris";
    string striker = "Osoro";

    cout << goalkeeper << "\n";
    cout << defender << "\n";
    cout << midfielder << "\n";
    cout << striker << "\n";
}

// create the main function in which our user defined function will be called.
int main()
{
    printPlayers(); // Call the function
    return 0;
}