#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int fre = 1, ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                fre++;
                ans = max(ans, fre);
            }
            else
                fre = 1;
        }
        if (n == ans)
        {
            cout << "0" << endl;
            continue;
        }
        if (ans == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        cout << n - ans + 1 << endl;
    }
    return 0;
}