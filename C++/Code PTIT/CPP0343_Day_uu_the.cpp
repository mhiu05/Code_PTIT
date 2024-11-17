#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;

int CountOfOddNumber(vector<int> v)
{
    int odd = 0;
    for (int x : v)
    {
        if (x % 2 != 0)
            ++odd;
    }
    return odd;
}

int CountOfEvenNumber(vector<int> v)
{
    int even = 0;
    for (int x : v)
    {
        if (x % 2 == 0)
            ++even;
    }
    return even;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> v;
        string s;
        getline(cin, s);
        string tmp;
        stringstream ss(s);
        while (ss >> tmp)
        {
            int x = stoi(tmp);
            v.push_back(x);
        }
        if ((v.size() % 2 == 0 && CountOfEvenNumber(v) > CountOfOddNumber(v) || (v.size() % 2 != 0 && CountOfOddNumber(v) > CountOfEvenNumber(v))))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}