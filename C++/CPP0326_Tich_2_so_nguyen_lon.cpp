#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
string add(string a, string b)
{
    if (a.length() < b.length())
        swap(a, b);
    while (a.length() != b.length())
        b = "0" + b;
    string c;
    int nho = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int x = a[i] - '0' + b[i] - '0' + nho;
        nho = x / 10;
        int z = x % 10;
        c.push_back(z + '0');
    }
    if (nho > 0)
        c.push_back(nho + '0');
    reverse(c.begin(), c.end());
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string c;
        vector<string> M(10, "0");
        M[1] = b;
        for (int i = 2; i < 10; i++)
        {
            M[i] = add(M[i - 1], b);
        }
        for (int i = 0; i < a.length(); i++)
        {
            c.push_back('0');
            c = add(c, M[a[i] - '0']);
        }
        cout << c << endl;
    }
}