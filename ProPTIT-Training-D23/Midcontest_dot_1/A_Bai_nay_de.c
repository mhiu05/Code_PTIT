#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    scanf("%lf", &a);
    if (a == (int)a)
        printf("a la so nguyen");
    else
        printf("la so thuc");
    return 0;
}