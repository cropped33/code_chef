#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        int n, k, nap = 0, add = 0;
        cin >> n >> k;
       cin>>S;
        for (int i = 0; i < n; i++)
        {
            if (S[i] == '0')
            {
                add++;
                if (add == k)
                {
                    nap++;
                    add = 0;
                }
            }
            else
            {
                add = 0;
            }
        }
        cout << nap << endl;
    }

    return 0;
}