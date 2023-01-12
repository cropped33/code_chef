#include <iostream>
using namespace std;
int main()
{
    int N, T;
    cin >> T;
    while (T--)
    {
        int sum = 0;
        cin >> N;
        while (N > 0)
        {
            sum = sum + N / 5;
            N = N / 5;
        }
        cout << sum << endl;
    }
    return 0;
}