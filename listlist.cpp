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
        if (n == 1)
        {
            cout << "0" << endl;
            continue;
        }
        sort(a, a + n);
        int num = 0, count = 0, max = 1;
        for (int i = 0; i < n; i++)
        {
            if (num == a[i])
            {
                count++;
                if (count > max)
                    max = count;
                    count=0;
            }
            else
            {
                num = a[i];
                count = 1;
            }
        }
        int others = n - max;
        if (max == 1)
            cout << "-1" << endl;
        else
            cout << others + 1 << endl;
    }
    return 0;
}