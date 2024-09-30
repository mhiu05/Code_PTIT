#include <stdio.h>
#include <math.h>
int x;
int check(int n)
{
    for (int i = 1; i * i + i <= 2 * n - 2; ++i)
    {
        for (int j = i; j * j + j <= 2 * n - 2; ++j)
        {
            if (i * i + i + j * j + j == 2 * n)
                return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (check(n))
        printf("Yes");
    else
        printf("No");
    return 0;
}