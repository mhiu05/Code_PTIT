#include <stdio.h>
#include <math.h>

int main()
{
    long long a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    long long delta = b * b - 4 * a * c;
    float x1 = 1.00 * (-b + sqrt(delta)) / (2 * a), x2 = 1.00 * (-b - sqrt(delta)) / (2 * a);
    if (a == 0 && b == 0 && c == 0)
        printf("VO SO NGHIEM");
    else if (a == 0 && b == 0 && c != 0)
        printf("VO NGHIEM");
    else if (a == 0 && b != 0)
        printf("%.2f", 1.00 * -c / b);
    else if (a != 0 && delta > 0)
    {
        if (x1 >= x2)
            printf("%.2f %.2f", x1, x2);
        else
            printf("%.2f %.2f", x2, x1);
    }
    else if (a != 0 && delta == 0)
        printf("%.2f", 1.00 * -b / (2 * a));
    else if (a != 0 && delta < 0)
        printf("VO NGHIEM");
    return 0;
}