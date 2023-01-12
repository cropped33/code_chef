#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int h = 0; h < test_case; h++)
    {
        int x, y, x1, x2, y1, y2;
        cin >> x >> y;
        if (x == 1 || x == 8 || y == 1 || y == 8) // position of king is in 1st and 8th row and column only.
        {
        }
        else
        {
            cout << "NO";
            exit(0);
        }
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        int a, b;
        a = x + 1;
        b = x - 1;
        if (a == x1 || a == x2 || b == x1 || b == x2) // avoiding the capture off rook by king.
        {
            cout << "NO";
            exit(0);
        }
        a = y + 1;
        b = y - 1;
        if (a == y1 || a == y2 || b == y1 || b == y2) // avoiding the capture off rook by king.
        {
            cout << "NO";
            exit(0);
        }
        if (x == x1 || x == x2 || y == y1 || y == y2) // avoiding the check to zzx king.
        {
            cout << "NO";
            exit(0);
        }
        if (x == 1 && y1 != 2) // positioning the 1st rook
        {
            cout << "NO";
            exit(0);
        }

        if (y == 1 && y1 != 2) // positioning the 1st rook
        {
            cout << "NO";
            exit(0);
        }
        for (x = 1; x <= 8; x++) // avoiding rooks to be in the same file preventing mate.
        {
            if (y1 == y2)
            {
                cout << "NO";
                exit(0);
            }
        }
        for (y = 1; y <= 8; y++) // avoiding rooks to be in the same file preventing mate.
        {
            if (x1 == x2)
            {
                cout << "NO";
                exit(0);
            }
        }
        cout << "YES";
    }

    return 0;
}