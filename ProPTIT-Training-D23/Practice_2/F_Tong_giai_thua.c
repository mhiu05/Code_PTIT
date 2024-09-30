#include <stdio.h>
long long gt(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * gt(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += gt(i);
    }
    printf("%lld", sum);
    return 0;
}