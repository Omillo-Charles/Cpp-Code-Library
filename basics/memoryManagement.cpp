// Memory management is the process of controlling how much memory your program uses - and how it is used.This includes creating, using, and releasing memory when it's no longer needed
// Get Memory Size
// You can check how much memory a variable type uses with the sizeof operator
#include <iostream>
using namespace std;

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    cout << sizeof(myInt) << "\n";    // 4 bytes (typically)
    cout << sizeof(myFloat) << "\n";  // 4 bytes
    cout << sizeof(myDouble) << "\n"; // 8 bytes
    cout << sizeof(myChar) << "\n";   // 1 byte
    return 0;
}
