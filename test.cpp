// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 0, A[10];
//     do
//     {
//         cin >> A[i];
//         i++;
//     } while (A[i - 1] != 42);
//     for (int j = 0; j < i-1; j++)
//     {
//         cout << A[j] << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int i;
    while (1)
    {
        cin >> i;
        if (i != 42)
            cout << i << endl;
        else
            break;
    }
    return 0;
}