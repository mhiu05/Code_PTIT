#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; ++j)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= 10; ++i)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}