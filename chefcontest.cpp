#include <iostream>
using namespace std;
int main()
{
    int t, x, y, p, q;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> p >> q;
        x = x + p * 10;
        y = y + q * 10;
        if (x > y)
        {
            cout << "Chefina" << endl;
        }
        else if (y > x)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}