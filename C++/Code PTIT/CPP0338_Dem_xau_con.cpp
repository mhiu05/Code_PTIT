#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        set<char> st;
        int dem = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                st.insert(s[j]);
                if (st.size() == k)
                    dem++;
                else if (st.size() > k)
                    break;
            }
            st.clear();
        }
        cout << dem << endl;
    }
}