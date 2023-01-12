#include <iostream>
using namespace std;
int main()
{
    int a, b, difference;
    cin >> a >> b;
    difference = a - b;
    int rem = difference % 10;
    if (rem == 9)
        difference -= 1;
    else
        difference += 1;
    cout << difference;
    return 0;
}