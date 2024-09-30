#include <stdio.h>
#include <cmath>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a % b == 0)
    {
        printf("%d + %d = %d\n", a, b, a + b);
        printf("%d - %d = %d\n", a, b, a - b);
        printf("%d * %d = %lld\n", a, b, (long long)a * b);
        printf("%d / %d = %d", a, b, a / b);
    }
    else
    {

        printf("%d + %d = %d\n", a, b, a + b);
        printf("%d - %d = %d\n", a, b, a - b);
        printf("%d * %d = %lld\n", a, b, (long long)a * b);
        printf("%d / %d = %.2f", a, b, 1.00 * a / b);
    }
    return 0;
}