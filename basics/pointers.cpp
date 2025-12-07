// A pointer is a variable that stores the memory address as its value.
// A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza"; // A string variable
    string *ptr = &food;   // A pointer variable that stores the address of food

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Output the memory address of food with the pointer
    cout << ptr << "\n";
    return 0;
}

// pointer dereference
// you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator)
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza"; // Variable declaration
    string *ptr = &food;   // Pointer declaration

    // Reference: Output the memory address of food with the pointer
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer
    cout << *ptr << "\n";
    return 0;
}

// Modify the Pointer Value
//  You can also change the pointer's value. But note that this will also change the value of the original variable
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string *ptr = &food;

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Access the memory address of food and output its value
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer
    cout << *ptr << "\n";

    // Output the new value of the food variable
    cout << food << "\n";
    return 0;
}
