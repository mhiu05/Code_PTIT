#include <stdio.h>
#include <cmath>

int main()
{
    long long n;
    int m;
    scanf("%lld%d", &n, &m);
    if ((long long)m * m * (m * m + 1) / 2 <= n)
        printf("YEs");
    else
        printf("N0");
    return 0;
}