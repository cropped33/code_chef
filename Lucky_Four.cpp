#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, rem = 0;
        cin >> n;
        do
        {
            if (n % 10 == 4)
            {
                rem++;
            }
            n = n / 10;
        } while (n > 0);
        cout << rem << endl;
    }
    return 0;
}