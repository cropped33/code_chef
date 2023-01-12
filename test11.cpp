#include <iostream>
#include <string>
using namespace std;
class lists
{
    int N, A[];

public:
    void set_list();
    void process_data();
};
void lists::set_list()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
}
void lists::process_data()
{
    int b;
    b= A[0];
    int count = 1;
    for (int j = N - 1; j >= 0; j--)
    {
        if (N == 1)
        {
            cout << "0" << '\n';
            break;
        }
        if (b == A[j])
        {
            cout << count << '\n';
            break;
        }
        if (j == 0)
        {
            cout << "-1" << '\n';
            break;
        }
        A[0] = A[0] * 10 + A[j];
        count++;
    }
}
int main()
{
    int T;
    cin >> T;
    lists number[200000];
    for (int i = 0; i < T; i++)
    {
        number[i].set_list();
        number[i].process_data();
    }
    return 0;
}