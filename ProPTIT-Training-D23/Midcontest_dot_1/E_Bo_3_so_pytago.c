#include <stdio.h>
#include <math.h>
int scp(int n)
{
    int can = sqrt(n);
    if (can * can == n)
        return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 1; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (scp(i * i + j * j) && (i * i + j * j <= n * n))
                ++cnt;
        }
    }
    printf("%d", cnt);
    return 0;
}