// C++ has many functions that allows you to perform mathematical tasks on numbers.

// 1. MAX and MIN
// The max(x,y) function can be used to find the highest value of x and y
// And the min(x,y) function can be used to find the lowest value of x and y
#include <iostream>
using namespace std;

int main()
{

    int x = 23;
    int y = 11;

    cout << max(x, y);
    cout << min(x, y);

    return 0;
}

// 2. C++ <cmath> Library
// Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int x = 64;
    float y = 2.64;
    double z = 3.2;

    cout << sqrt(x);
    cout << round(y);
    cout << log(z);

    return 0;
}