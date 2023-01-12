#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        int S[n], dif;
        for (int i = 0; i < n; i++)
        {
            cin >> S[i];
        }
        sort(S, S + n);
        int sk_dif = S[1] - S[0];
        for (int i = 1; i < n - 1; i++)
        {
            dif = S[i + 1] - S[i];
            if (dif < sk_dif)
                sk_dif = dif;
        }

        cout << sk_dif << endl;
    }
    return 0;
}