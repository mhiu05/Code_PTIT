#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int m = 1; m <= t; ++m)
    {
        int n;
        scanf("%d", &n);
        char x = 97;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= 2 * n - 1; ++j)
            {
                if (j >= i && j <= 2 * n - i)
                    printf("%c", x + abs(n - j));
                else
                    printf("%c", x + n - i);
            }
            printf("\n");
        }
        for (int i = 1; i < n; ++i)
        {
            for (int j = 1; j <= 2 * n - 1; ++j)
            {
                if (i < abs(n - j))
                    printf("%c", x + i);
                else
                    printf("%c", x + abs(n - j));
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;