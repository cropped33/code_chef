#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, same = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                same++;
            else
                same = 0;
            if (a[n - 1] < a[i])
            {
                count++;
                break;
            }
        }
        if (same == n)
        {
            cout << "0" << endl;
            continue;
        }
        if (count == 0)
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}