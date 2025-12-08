// If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function
#include <iostream>
using namespace std;

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    cout << multiply(2, 3);
    return 0;
}