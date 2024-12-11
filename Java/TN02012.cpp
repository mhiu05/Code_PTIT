#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

class Pb
{
public:
    string id, name;
    Pb() {};
    Pb(string id, string name)
    {
        this->id = id;
        this->name = name;
    }
};

class Nv
{
public:
    string id, name;
    int salary, day;
    Nv() {};
    Nv(string id, string name, int salary, int day)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->day = day;
    }
};

void nhap1(Pb a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        string tmp;
        getline(cin, tmp);
        string id = tmp.substr(0, 2);
        string name = tmp.substr(3);
        a[i] = Pb(id, name);
    }
}

void nhap2(Nv b[], int m)
{
    for (int i = 0; i < m; ++i)
    {
        string id, name;
        int salary, day;
        getline(cin, id);
        getline(cin, name);
        cin >> salary >> day;
        cin.ignore();
        b[i] = Nv(id, name, salary, day);
    }
}

void in(Pb a[], Nv b[], int n, int m)
{
    for (int i = 0; i < m; ++i)
    {
        int y = stoi(b[i].id.substr(1, 2));
        string gr = b[i].id.substr(0, 1);
        string idPb = b[i].id.substr(3, 2);
        int cal_salary = b[i].day * b[i].salary;
        int add = 0;
        if (gr == "A")
        {
            if (y >= 16)
            {
                add = 20;
            }
            else if (y >= 9)
                add = 14;
            else if (y >= 4)
                add = 12;
            else
                add = 10;
        }
        else if (gr == "B")
        {
            if (y >= 16)
            {
                add = 16;
            }
            else if (y >= 9)
                add = 13;
            else if (y >= 4)
                add = 11;
            else
                add = 10;
        }
        else if (gr == "C")
        {
            if (y >= 16)
            {
                add = 14;
            }
            else if (y >= 9)
                add = 12;
            else if (y >= 4)
                add = 10;
            else
                add = 9;
        }
        else
        {
            if (y >= 16)
            {
                add = 13;
            }
            else if (y >= 9)
                add = 11;
            else if (y >= 4)
                add = 9;
            else
                add = 8;
        }

        int totalSalary = cal_salary * add * 1000;

        cout << b[i].id << " " << b[i].name << " ";
        for (int j = 0; j < n; ++j)
        {
            if (a[j].id == idPb)
            {
                cout << a[j].name << " ";
                break;
            }
        }
        cout << totalSalary << endl;
    }
}

int main()
{
    faster();

    int n;
    cin >> n;
    cin.ignore();
    Pb a[n];
    nhap1(a, n);

    int m;
    cin >> m;
    cin.ignore();
    Nv b[m];
    nhap2(b, m);

    in(a, b, n, m);
    return 0;
}