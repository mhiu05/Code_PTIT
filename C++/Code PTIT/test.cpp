#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;

struct SinhVien
{
public:
    int age;
    void setAge(int age)
    {
        this->age = age;
    }
    // SinhVien() {};
    SinhVien(int age)
    {
        age = age;
    }
};

int main()
{
    faster();
    SinhVien sv;
    cout << sv.age << endl;
    return 0;
}