#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N, K;
    cin >> T;
    while (T > 0)
    {
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cin >> K;
        K = A[K-1];
        sort(A, A + N);
        for (int i = 0; i < N; i++)
        {
            if (K == A[i])
            {
                cout << i+1 << endl;
                break;
            }
        }
        T--;
    }
    return 0;
}