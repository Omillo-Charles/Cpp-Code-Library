// You can also use a default parameter value, by using the equals sign (=).
// If we call the function without an argument, it uses the default value ("Lavington")
#include <iostream>
#include <string>
using namespace std;

void estates(string estate = "Lavington")
{
    cout << estate << "\n";
}

int main()
{
    estates("Kilimani");   // returns Kilimani
    estates("Madaraka");   // return Madaraka
    estates("Kileleshwa"); // Returns Kileleshwa
    estates("Karen");      // returns Karen
    estates();             // Returns the default parameter Lavington
}