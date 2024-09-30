#include <stdio.h>

int a[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int tinhgiaithua(int n)
{
    if (n < 10)
        return a[n];
    if (((n / 10) % 10) % 2 == 0)
        return ((6 * tinhgiaithua(n / 5) * a[n % 10]) % 10);
    else
        return ((4 * tinhgiaithua(n / 5) * a[n % 10]) % 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", tinhgiaithua(n));
    return 0;
}