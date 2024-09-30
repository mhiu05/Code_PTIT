#include <stdio.h>
#include <math.h>

int SNT(int n)
{
    if (n <= 1)
        return 0;
    int can = sqrt(n);
    for (int i = 2; i <= can; ++i)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{

    int n;
    scanf("%d", &n);
    if (!SNT(n))
    {
        printf("NO");
        return 0;
    }

    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    if (SNT(sum))
        printf("YES.");
    else
        printf("NO");
    return 0;
}