#include <iostream>
using namespace std;

int n, X[100], ok = 1;

int check()
{
    if (X[1] != 8 || X[n] != 6)
        return 0;
    for (int i = 2; i <= n; ++i)
    {
        if (X[i] == X[i - 1] && X[i] == 8)
            return 0;
    }
    for (int i = 4; i <= n; ++i)
    {
        if (X[i] == X[i - 1] && X[i] == X[i - 2] && X[i] == X[i - 3] && X[i] == 6)
            return 0;
    }
    return 1;
}

void init()
{
    for (int i = 1; i <= n; ++i)
    {
        X[i] = 6;
    }
}

void print()
{
    if (check())
    {
        for (int i = 1; i <= n; ++i)
        {
            cout << X[i];
        }
        cout << endl;
    }
}

void brute_force()
{
    int i = n;
    while (i > 0 && X[i] == 8)
    {
        X[i] = 6;
        --i;
    }
    if (i == 0)
        ok = 0;
    else
        X[i] = 8;
}

int main()
{
    cin >> n;
    init();
    while (ok)
    {
        print();
        brute_force();
    }
    return 0;
}