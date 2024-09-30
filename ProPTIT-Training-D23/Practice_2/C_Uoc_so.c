#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 2;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            ++count;
            if (i != n / i)
                ++count;
        }
    }
    printf("%d", count);
    return 0;
}