#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a == c && b == c)
        printf("%lld", a / b);
    else if (a % c == 0 || b % c == 0)
        printf("%lld", b / c - a / c + 1);
    else if (a % c != 0 && b % c != 0)
        printf("%lld", b / c - a / c);
    return 0;
}