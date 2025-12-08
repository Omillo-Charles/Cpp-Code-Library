// Inside the function, you can add as many parameters as you want
#include <string>
#include <iostream>
using namespace std;

void multipleFunction(int age, string name)
{
    cout << "Hello I am " << name << "and I am " << age << "years old!";
}

int main()
{
    multipleFunction(20, "Omillo Fidel Charles");
    return 0;
}

// Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.