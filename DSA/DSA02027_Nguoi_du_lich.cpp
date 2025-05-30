#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 15;
int n;
int a[MAX][MAX];        // ma trận chi phí
int visited[MAX];       // đánh dấu các đỉnh đã đi
int path[MAX];          // đường đi hiện tại
int fopt = INT_MAX;     // chi phí tốt nhất
int f = 0;              // chi phí hiện tại
int min_edge = INT_MAX; // cạnh nhỏ nhất trong toàn bộ đồ thị

void init()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
            if (i != j)
                min_edge = min(min_edge, a[i][j]);
        }
}

// i: vị trí hiện tại trong path
void Try(int i)
{
    for (int j = 1; j < n; ++j)
    { // thử các đỉnh từ 1 đến n-1 (0 là cố định)
        if (!visited[j])
        {
            path[i] = j;
            visited[j] = 1;
            f += a[path[i - 1]][j];

            // Ước lượng cận dưới
            int g = f + (n - i) * min_edge;

            if (g < fopt)
            {
                if (i == n - 1)
                {
                    int total_cost = f + a[j][0]; // quay về đỉnh 0
                    fopt = min(fopt, total_cost);
                }
                else
                {
                    Try(i + 1);
                }
            }

            visited[j] = 0;
            f -= a[path[i - 1]][j];
        }
    }
}

int main()
{
    init();

    path[0] = 0; // xuất phát tại đỉnh 0
    visited[0] = 1;
    Try(1);
    cout << fopt << endl;

    return 0;
}
