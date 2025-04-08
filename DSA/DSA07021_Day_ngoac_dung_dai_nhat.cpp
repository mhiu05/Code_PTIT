#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    int max_length = 0;
    int left = 0, right = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
            ++left;
        else
            ++right;

        if (left == right)
        {
            max_length = max(max_length, 2 * right);
        }
        else if (right > left)
        {
            left = 0;
            right = 0;
        }
    }

    left = 0;
    right = 0;

    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] == '(')
            ++left;
        else
            ++right;

        if (left == right)
        {
            max_length = max(max_length, 2 * right);
        }
        else if (left > right)
        {
            left = 0;
            right = 0;
        }
    }
    return max_length;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}