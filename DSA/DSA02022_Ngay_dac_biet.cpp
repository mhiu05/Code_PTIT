#include <bits/stdc++.h>
using namespace std;

int n = 8, ok = 1;
vector<int> a(8);

void init()
{
    for (int i = 0; i < n; ++i)
    {
        a[i] = 0;
    }
}

vector<vector<int>> ans;

void brute_force()
{
    int i = n - 1;
    while (i >= 0 && a[i] == 2)
    {
        a[i] = 0;
        --i;
    }
    if (i == -1)
        ok = 0;
    else
        a[i] = 2;
}


int check2(){
    int d = 10 * a[0] + a[1];
    int m = 10 * a[2] + a[3];
    if(d == 0 || m == 0) return 0;
    return m <= 12; 
}

int main()
{
    cin >> n;
    init();
    while (ok)
    {
        brute_force();
        if(ok != 0){
            if(a[4] != 0 && check2()){
                ans.push_back(a);
            }
        }
    }
    sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); ++i){
            for(int j = 0; j < ans[i].size(); ++j){
                cout << ans[i][j];
                if(j == 1 || j == 3) cout << "/";
            }
            cout << endl;
        }
    return 0;
}