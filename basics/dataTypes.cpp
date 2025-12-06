// BASIC C++ DATA TYPES
// Reference: Check out the variables.cpp file for more details on variable declaration and initialization.

// BOOLEAN -Stores true or false values
// CHAR - Stores a single character/letter/number, or ASCII values
// INT - Stores whole numbers, without decimals
// FLOAT - Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
// DOUBLE - Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

// Use int when you need to store a whole number without decimals, like 35 or 1000, and float or double when you need a floating point number(with decimals), like 9.99 or 3.14515.

// float vs. double
// The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.

// Boolean Types
// A boolean data type is declared with the bool keyword and can only take the values true or false.
// When the value is returned,
// true = 1 and false = 0.

// Character Types
// The char data type is used to store a single character.The character must be surrounded by single quotes, like 'A' or 'c':

// String Types
// The string type is used to store a sequence of characters(text).This is not a built - in type, but it behaves like one in its most basic usage.String values must be surrounded by double quotes:

// The auto Keyword
// The auto keyword automatically detects the type of a variable based on the value you assign to it.
// It helps you write cleaner code and avoid repeating types, especially for long or complex types.

#include <iostream>
using namespace std;

int main()
{
    auto name = "Omillo"; // Automatically detects the data type of name to be a STRING

    return 0;
}