#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long

using namespace std;

 int main()
{
    int t;  
    cin >> t; 
    while (t--)
    {
        string s;
        cin >> s;
        do
        {
            cout << s << " ";
        } while (next_permutation(s.begin(), s.end()));
        cout << endl;
    }
}