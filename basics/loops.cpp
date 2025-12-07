// C++ While Loop
// The while loop loops through a block of code as long as a specified condition is true
#include <iostream>
using namespace std;

int main()
{
    int countdown = 24;

    while (countdown > 0)
    {
        cout << countdown << "\n";
        countdown--;
    }

    return 0;
}

// The Do/While Loop
// The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true. Then it will repeat the loop as long as the condition is true
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    do
    {
        cout << x << "\n";
        x++;
    } while (x < 5);

    return 0;
}

// C++ For Loop
// When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop
// Syntax
/*
    for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
*/
// Statement 1 is executed (one time) before the execution of the code block
// Statement 2 defines the condition for executing the code block
// Statement 3 is executed (every time) after the code block has been executed.
#include <iostream>
using namespace std;

int main()
{
    int a = 1; // first starting number
    int b = 2; // second starting number

    // Print the first two numbers
    cout << a << ", " << b;

    // Generate the next 5 numbers
    for (int i = 0; i < 5; i++)
    {

        // Step 1: Calculate the next number using the current a and b
        int next = a + b;

        // Step 2: Print this new number
        cout << ", " << next;

        // Step 3: Update values for the next loop cycle
        // b becomes the new a
        // next becomes the new b
        a = b;
        b = next;
    }

    return 0;
}

// Nested Loops
// It is also possible to place a loop inside another loop. This is called a nested loop.
// The "inner loop" will be executed one time for each iteration of the "outer loop"
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "*";

        for (int j = 0; j < 10; j++)
        {
            cout << "*";
        }
    }

    return 0;
}
