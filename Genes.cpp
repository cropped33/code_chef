#include <bits/stdc++.h>
using namespace std;
int main()
{
    char f, m;
    cin >> f >> m;
        if (f == 'R' || m == 'R')
        cout << "R";
    else if (f == 'B' || m == 'B')
        cout << "B";
    else
        cout << "G";
    return 0;
}