#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int count = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int least = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] <= least)
            {
                least = a[i];
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}