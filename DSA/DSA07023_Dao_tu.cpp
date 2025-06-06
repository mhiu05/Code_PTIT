#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 100005;

int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        stack<string> st;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            st.push(tmp);
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}