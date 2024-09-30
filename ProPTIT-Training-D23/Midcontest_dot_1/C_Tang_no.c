#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (n % 2 == 0)
            {
                if (i == n / 2 || i == n / 2 + 1)
                {
                    printf("*");
                }
                if (i < n / 2)
                {
                    if (j <= i || j >= n - i + 1)
                        printf("*");
                    else
                        printf(" ");
                }
                if (i > n / 2 + 1)
                {
                    if (j <= n - i + 1)
                        printf("*");
                    else if (j < i && j > n - i + 1)
                        printf(" ");
                    else
                        printf("*");
                }
            }
            else
            {
                if (i == n / 2 + 1)
                    printf("*");
                if (i < n / 2 + 1)
                {
                    if (j <= i || j >= n - i + 1)
                        printf("*");
                    else
                        printf(" ");
                }
                if (i > n / 2 + 1)
                {
                    if (j <= n - i + 1)
                        printf("*");
                    else if (j < i && j > n - i + 1)
                        printf(" ");
                    else
                        printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}