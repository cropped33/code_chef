#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string j, s, p;
        cin >> j >> s;
        sort(s.begin(), s.end());
        for (int i = 0; j[i] != '\0'; i++)
        {
            for (int k = 0; s[k] != '\0'; k++)
            {
                if (j[i - 1] != j[i])
                {
                    if (j[i] == s[k])
                        count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}