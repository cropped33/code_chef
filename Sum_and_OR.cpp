#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, s, l, j = 0;
        cin >> x >> s;
        int a[s];
        for (int i = 1; i < s; i++)
        {
            if ((i | s) == s)
            {
                a[j] = i;
                j++;
            }
        }
        for (int i = 0; i < j; i++)
        {
            
            






            // cout << a[i] << endl;
        }
        
    }
    return 0;
}