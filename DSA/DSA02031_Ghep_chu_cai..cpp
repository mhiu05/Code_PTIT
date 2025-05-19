#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // dùng cho iota

using namespace std;

// Hàm kiểm tra điều kiện: mỗi chữ cái nguyên âm ('A' hoặc 'E')
// phải có ít nhất một nguyên âm bên cạnh
bool isValid(const vector<char> &M)
{
    int n = M.size();
    for (int i = 1; i < n - 1; ++i)
    {
        if (M[i] == 'A' || M[i] == 'E')
        {
            if (M[i - 1] != 'A' && M[i - 1] != 'E' &&
                M[i + 1] != 'A' && M[i + 1] != 'E')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    char c;
    cin >> c;

    int len = c - 'A' + 1;
    vector<char> M(len);

    // Khởi tạo vector từ 'A' đến ký tự c
    iota(M.begin(), M.end(), 'A');

    // Duyệt tất cả hoán vị
    do
    {
        if (isValid(M))
        {
            for (char ch : M)
            {
                cout << ch;
            }
            cout << endl;
        }
    } while (next_permutation(M.begin(), M.end()));

    return 0;
}
