#include <stdio.h>
#include <math.h>

int so_uoc(int n)
{
    int dem = 0;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            ++dem;
            if (i != n / i)
                ++dem;
        }
    }
    return dem;
}

int main()
{
    int l, r;
    scanf("%d%d", &l, &r);
    int count = 0;
    for (int i = l + 1; i <= r - 1; ++i)
    {
        if (so_uoc(i) % 2 != 0)
            ++count;
    }
    printf("%d", count);
    return 0;
}