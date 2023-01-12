#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, G, I, Q, N, a, b;
    cin >> T;
    while (T--)
    {
        cin >> G;
        while (G--)
        {
            cin >> I >> N >> Q;
            if (N % 2 == 0)
                b = a = N / 2;
            else
            {
                a = (N - 1) / 2;
                b = N - a;
            }
            if (I == Q)
                cout << a << endl;
            else
                cout << b << endl;
        }
    }
        return 0;
}