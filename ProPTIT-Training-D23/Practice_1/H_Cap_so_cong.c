#include <stdio.h>
int main()
{
    long long n;
    int u1, d;
    scanf("%lld%d%d", &n, &u1, &d);
    printf("%lld", n * u1 + n * (n - 1) * d / 2);
    return 0;
}