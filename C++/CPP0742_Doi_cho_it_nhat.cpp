#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int minSwapsToSort(vector<int> &arr)
{
    int n = arr.size();
    vector<pair<int, int>> pos(n); // Lưu giá trị và vị trí ban đầu của mỗi phần tử
    for (int i = 0; i < n; i++)
        pos[i] = {arr[i], i};

    // Sắp xếp theo giá trị để tìm vị trí đúng của từng phần tử
    sort(pos.begin(), pos.end());

    vector<bool> visited(n, false); // Đánh dấu các phần tử đã được xử lý
    int swaps = 0;

    for (int i = 0; i < n; i++)
    {
        // Nếu phần tử đã đúng vị trí hoặc đã được xử lý thì bỏ qua
        if (visited[i] || pos[i].second == i)
            continue;

        // Đếm độ dài chu trình
        int cycle_size = 0;
        int j = i;
        while (!visited[j])
        {
            visited[j] = true;
            j = pos[j].second;
            cycle_size++;
        }

        // Nếu chu trình có độ dài > 1 thì cần cycle_size - 1 phép đổi chỗ
        if (cycle_size > 1)
            swaps += (cycle_size - 1);
    }

    return swaps;
}

int main()
{
    faster();
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << minSwapsToSort(arr) << endl;
    }
    return 0;
}