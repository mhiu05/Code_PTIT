#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += 1.0 / (1.0 * i * i * i);
    }
    printf("%.10lf", sum);
    return 0;
}