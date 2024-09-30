#include <stdio.h>

long long GCD(long long a, long long b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; ++i)
    {
        long long a, x, y;
        scanf("%lld%lld%lld", &a, &x, &y);
        for (int i = 1; i <= GCD(x, y); ++i)
        {
            printf("%lld", a);
        }
        printf("\n");
    }
    return 0;
}