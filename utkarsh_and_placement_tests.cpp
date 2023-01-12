#include <iostream>
#include <cctype>
using namespace std;

class job_offers
{
    char first, second, third, x, y;

public:
    void get_perference();
    void received_offers();
    void print_data();
};
void job_offers::get_perference()
{
    cin >> first >> second >> third;
    first = toupper(first);
    second = toupper(second);
    third = toupper(third);
}
void job_offers::received_offers()
{
    cin >> x >> y;
    x = toupper(x);
    y = toupper(y);
}
void job_offers::print_data()
{

    if (first == x || first == y)
    {
        cout << first << endl;
    }
    else if (second == x || second == y)
    {
        cout << second << endl;
    }
    else
    {
        cout << third << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    job_offers Utkarsh;
    for (int i = 0; i < T; i++)
    {
        Utkarsh.get_perference();
        Utkarsh.received_offers();
        Utkarsh.print_data();
    }

    return 0;
}