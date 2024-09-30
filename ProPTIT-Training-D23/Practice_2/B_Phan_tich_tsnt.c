#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            int dem = 0;
            while (n % i == 0)
            {
                ++dem;
                n /= i;
            }
            if (n != 1)
                printf("%d^%d x ", i, dem);
            else
                printf("%d^%d", i, dem);
        }
    }
    if (n != 1)
        printf("%d^1", n);
    return 0;
}