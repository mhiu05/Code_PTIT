#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int vo = n;
    int chai = n;
    while (vo >= k)
    {
        vo = vo - k + 1;
        ++chai;
    }
    printf("%d", chai);
    return 0;
}