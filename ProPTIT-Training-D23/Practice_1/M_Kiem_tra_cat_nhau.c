#include <stdio.h>
#include <cmath>

int main()
{
    int xa, ya, xb, yb;
    int xc, yc, xd, yd;
    scanf("%d%d %d%d %d%d %d%d", &xa, &ya, &xb, &yb, &xc, &yc, &xd, &yd);
    float a = 1.00 * abs(yb - ya) / abs(xb - xa), b = 1.00 * abs(yc - yd) / abs(xc - xd);
    if (a == b)
        printf("NO");
    else
        printf("YES!");
    return 0;
}