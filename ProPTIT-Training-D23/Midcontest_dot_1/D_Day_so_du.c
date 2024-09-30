#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        if (k > 3)
            printf("0");
        else if (k == 1)
            printf("1");
        else if (k == 2)
        {
            if (m >= n)
            {
                printf("%d", m / n + n - 1);
            }
            else
                printf("%d", m);
        }
        else if (k == 3)
        {
            if (m >= n)
            {
                printf("%d", m - n - (m - n) / n);
            }
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}