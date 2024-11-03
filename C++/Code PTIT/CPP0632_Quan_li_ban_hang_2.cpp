#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

class KH
{
public:
    string mkh, tkh, gt, ns, dc;
};

class MH
{
public:
    string mmh, tmh, dvt;
    int gm, gb;
};

KH kh[100];
MH mh[100];

int a = 0, b = 0, c = 0;

class KhachHang
{
public:
    string mkh, tkh, gt, ns, dc;
    friend istream &operator>>(istream &in, KhachHang &x)
    {
        if (a == 0)
            in.ignore();
        string tmp = "";
        tmp += to_string(a + 1);
        while (tmp.size() < 3)
        {
            tmp = "0" + tmp;
        }
        tmp = "KH" + tmp;
        x.mkh = tmp;
        getline(in, x.tkh);
        getline(in, x.gt);
        getline(in, x.ns);
        getline(in, x.dc);
        kh[a].mkh = tmp;
        kh[a].tkh = x.tkh;
        kh[a].gt = x.gt;
        kh[a].ns = x.ns;
        kh[a].dc = x.dc;
        ++a;
        return in;
    }
};

class MatHang
{
public:
    string mmh, tmh, dvt;
    int gm, gb;
    friend istream &operator>>(istream &in, MatHang &x)
    {
        string tmp = "";
        tmp = to_string(b + 1);
        while (tmp.size() < 3)
            tmp = "0" + tmp;
        tmp = "MH" + tmp;
        x.mmh = tmp;
        in.ignore();
        getline(in, x.tmh);
        getline(in, x.dvt);
        in >> x.gm >> x.gb;
        mh[b].mmh = x.mmh;
        mh[b].tmh = x.tmh;
        mh[b].dvt = x.dvt;
        mh[b].gb = x.gb;
        mh[b].gm = x.gm;
        ++b;
        return in;
    }
};

class HoaDon
{
public:
    string mhd;
    string mkh, mmh;
    int sl;
    friend istream &operator>>(istream &in, HoaDon &x)
    {
        string tmp = to_string(c + 1);
        while (tmp.size() < 3)
            tmp = "0" + tmp;
        tmp = "HD" + tmp;
        x.mhd = tmp;
        in >> x.mkh >> x.mmh >> x.sl;
        ++c;
        return in;
    }
    friend ostream &operator<<(ostream &out, HoaDon x)
    {
        out << x.mhd << " ";
        for (int i = 0; i < a; ++i)
        {
            if (x.mkh == kh[i].mkh)
            {
                out << kh[i].tkh << " " << kh[i].dc << " ";
            }
        }
        for (int i = 0; i < b; ++i)
        {
            if (x.mmh == mh[i].mmh)
            {
                out << mh[i].tmh << " " << mh[i].dvt << " " << mh[i].gm << " " << mh[i].gb << " ";
                out << x.sl << " " << x.sl * mh[i].gb;
            }
        }
        out << endl;
        return out;
    }
};

int cmp(HoaDon x, HoaDon y)
{
    return
}

void sapxep(HoaDon dshd, int k)
{
    sort(dshd, dshd + k, cmp);
}

int main()
{
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> dskh[i];
    cin >> M;
    for (i = 0; i < M; i++)
        cin >> dsmh[i];
    cin >> K;
    for (i = 0; i < K; i++)
        cin >> dshd[i];

    sapxep(dshd, K);

    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}