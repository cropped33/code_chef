#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n - 1];
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }
        for (int i = 0; i < n / 2; i++)
        {
            s[i] = '0';
            s[n - i - 1] = '1';
        }
        for (int i = 0; i < n; i++)
            cout << s[i];
    }
    cout << endl;
    return 0;
}
//
//
//
// 
// 
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 1;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
                ans = ans * 10 + 1;
            else
                ans = ans * 10;
        }
        cout << ans << endl;
    }
    cout << endl;
    return 0;
}