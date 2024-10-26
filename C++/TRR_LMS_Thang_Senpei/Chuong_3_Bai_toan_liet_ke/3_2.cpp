#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<char> v;
    for (int i = 1; i <= m; ++i)
    {
        v.push_back('H');
    }
    for (int i = 1; i <= n; ++i)
    {
        v.push_back('V');
    }
    do
    {
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}