#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> combination(k);
        for (int i = 0; i < k; ++i)
        {
            cin >> combination[i];
        }

        // Tạo chuỗi nhị phân: '0' là phần tử được chọn, '1' là không chọn
        string binary(n, '1'); // mặc định không chọn
        for (int i = 0; i < k; ++i)
        {
            binary[combination[i] - 1] = '0'; // đánh dấu các phần tử đã chọn
        }

        // Sinh tổ hợp phía trước
        prev_permutation(binary.begin(), binary.end());
        // In tổ hợp mới: vị trí của '0' là phần tử được chọn
        for (int i = 0; i < n; ++i)
        {
            if (binary[i] == '0')
            {
                cout << (i + 1) << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
