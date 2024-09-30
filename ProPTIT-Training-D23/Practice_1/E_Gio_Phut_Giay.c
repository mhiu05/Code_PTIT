#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int h = n / 3600;
    int ph = (n - h * 3600) / 60;
    int s = n - h * 3600 - 60 * ph;
    printf("%02d:%02d:%02d", h, ph, s);
    return 0;
}