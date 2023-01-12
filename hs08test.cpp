#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;
    if (int(x) % 5 == 0)
    {
        float draw = y - x - 0.50;
        if (draw >= 0)
            cout << draw;
        else
            cout << y;
    }
    else
        cout << y;
    return 0;
}