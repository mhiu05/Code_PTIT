#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

struct SequenceTracker
{
    map<int, int> sequences; // Lưu trữ các dãy con (x, y)

    void add(int x, int y)
    {
        auto it = sequences.lower_bound(x);
        auto temp = it;

        // Loại bỏ các phần tử không cần thiết
        while (temp != sequences.end() && temp->second >= y)
        {
            temp++;
        }
        sequences.erase(it, temp);

        // Thêm phần tử mới
        sequences.insert({x, y});
    }

    bool exists(int x, int y)
    {
        auto it = sequences.lower_bound(x);
        if (it == sequences.begin())
            return false;
        it--;
        return it->second < y;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<SequenceTracker> dp(n + 1);
    dp[0].add(INT_MIN, INT_MIN); // Khởi tạo giá trị ban đầu

    int max_length = 0;

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        // Tìm kiếm nhị phân để xác định độ dài tối đa
        int left = 0, right = max_length;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (dp[mid].exists(x, y))
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        // Cập nhật độ dài tối đa nếu cần
        if (max_length == left - 1)
        {
            max_length = left;
        }

        // Thêm vào danh sách các dãy con
        dp[left].add(x, y);
    }

    cout << max_length << endl;

    return 0;
}