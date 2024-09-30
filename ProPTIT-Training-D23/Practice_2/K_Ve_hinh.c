#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; ++i)
    {
        for (int j = 1; j <= 2 * n - 1; ++j)
        {
            if (i == n)
                printf("*");
            else if ((i == j || j == 1) && i < n)
                printf("*");
            else if ((i == j || j == 2 * n - 1) && i > n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}