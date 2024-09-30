#include <stdio.h>
#include <math.h>

int SNT(int a)
{
    for (int i = 2; i <= sqrt(a); ++i)
    {
        if (a % i == 0)
            return 0;
    }
    return a > 1;
}

int SSNT(int m)
{
    while (m != 0)
    {
        if (SNT(m))
            m /= 10;
        else
            return 0;
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("-1");
    for (int j = 2; j <= n; ++j)
    {
        if (SSNT(j))
            printf("%d ", j);
    }
    return 0;
}