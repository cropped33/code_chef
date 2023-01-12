// #include <iostream>
// using namespace std;
// int main()
// {
//     int gold_coin;
//     cin >> gold_coin;
//     int n[gold_coin + 1];
//     for (int i = 0; i <= gold_coin; i++)
//     {
//         n[i] = i;
//         n[i] = max(n[i], n[i / 2] + n[i / 3] + n[i / 4]);
//     }
//     cout << n[gold_coin];
//     return 0;
// }
//
//
//
//
//
#include <iostream>
using namespace std;
int recurse(int a)
{
    if (a < 12)
        return a;
    return recurse(a / 2) + recurse(a / 3) + recurse(a / 4);
}
int main()
{
    int gold_coin;
    int ans[10], i = 0;
    while (scanf("%d", &gold_coin) != EOF)
    {
        int sum = recurse(gold_coin);
        if (sum > gold_coin)
            ans[i] = sum;
        else
            ans[i] = gold_coin;
        i++;
    }
    return 0;
}