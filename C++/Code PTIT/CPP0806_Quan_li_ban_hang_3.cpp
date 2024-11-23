#include <bits/stdc++.h>
using namespace std;
class KH;
class MH;
map<int, KH> khh;
map<int, MH> mhh;
class KH
{
public:
    int code;
    string name, gender, birth, address;
};
class MH
{
public:
    int code;
    string name, unit;
    long long purchase, price;
};
string strip(string s)
{
    stringstream ss(s);
    string tok, result = "";
    while (ss >> tok)
    {
        result += tok;
        result += " ";
    }
    return result.erase(result.length() - 1);
}
void get_KH()
{
    ifstream in("KH.in");
    int n;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        int code;
        string name, gender, birth, address;
        code = i + 1;
        getline(in >> ws, name);
        getline(in >> ws, gender);
        getline(in >> ws, birth);
        getline(in >> ws, address);
        khh[i + 1] = {code, strip(name), strip(gender), strip(birth), strip(address)};
    }
}
void get_MH()
{
    ifstream in("MH.in");
    int n;
    in >> n;
    for (int i = 0; i < n; i++)
    {
        int code;
        string name, unit;
        long long purchase, price;
        code = i + 1;
        getline(in >> ws, name);
        getline(in >> ws, unit);
        in >> purchase >> price;
        mhh[i + 1] = {code, strip(name), strip(unit), purchase, price};
    }
}
void Show_HD()
{
    ifstream in("HD.in");
    int n;
    in >> n;
    string code_kh, code_mh;
    int quantity;
    for (int i = 0; i < n; i++)
    {
        cout << "HD" << setfill('0') << setw(3) << i + 1 << " ";
        in >> code_kh >> code_mh >> quantity;
        int ckh = stoi(&code_kh[2]);
        int cmh = stoi(&code_mh[2]);
        cout << khh[ckh].name << " ";
        cout << khh[ckh].address << " ";
        cout << mhh[cmh].name << " ";
        cout << mhh[cmh].unit << " ";
        cout << mhh[cmh].purchase << " ";
        cout << mhh[cmh].price << " ";
        cout << quantity << " ";
        cout << mhh[cmh].price * quantity << endl;
    }
}
int main()
{
    get_KH();
    get_MH();
    Show_HD();
}