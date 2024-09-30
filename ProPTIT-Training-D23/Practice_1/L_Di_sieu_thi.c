#include <stdio.h>
#include <cmath>

int main()
{
    int n;
    long long x, k, h;
    scanf("%lld%d%lld%lld", &x, &n, &k, &h);
    if (n * x * (x + 1) / 2 <= k + h)
        printf("YES.");
    else
        printf("N0");
    return 0;
}