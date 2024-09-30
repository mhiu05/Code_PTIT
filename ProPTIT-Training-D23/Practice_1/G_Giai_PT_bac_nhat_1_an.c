#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0 && b == 0)
        printf("ALL");
    else if (a == 0 && b != 0)
        printf("INVALID");
    else
        printf("%.6lf", 1.00 * -b / a);
    return 0;
}