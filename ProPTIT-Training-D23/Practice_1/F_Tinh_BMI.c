#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &b, &a);
    double bmi = 1.00 * a / (b * b);
    if (bmi >= 0.003)
        printf("Beo phi");
    else if (bmi >= 0.0025 && bmi < 0.003)
        printf("Thua can");
    else if (bmi >= 0.00185 && bmi < 0.0025)
        printf("Trung binh");
    else
        printf("Thieu can");
}