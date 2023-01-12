#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int m, n, j = 0;
        cin >> n >> m;
        int done[m], A[m];
        for (int i = 0; i < m; i++)
        {
            cin >> done[i];
        }
        sort(done, done + m);
        for (int i = 0; i < n; i++)
        {
            if (done[i] == i)
                continue;
            else
            {
                A[j] = i;
                j++;
            }
        }
        for (int i = 0; i < j; i + 2)
        {
            if (A[i] == '\0')
                cout << endl;
            else
                cout << A[i] << " ";
        }
        for (int i = 1; i < j; i + 2)
        {
            if (A[i] == '\0')
                cout << endl;
            else
                cout << A[i] << " ";
        }
        T--;
    }
    return 0;
}