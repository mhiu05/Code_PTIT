#include <stdio.h>

int main()
{
    long long sum = 0;
    char x = ' ';
    while (x != '\n')
    {
        long long a;
        scanf("%lld", &a);
        sum += a;
        x = getchar();
    }
    printf("%lld", sum);
    return 0;
}