#include <stdio.h>
#include <math.h>
int prime(long long n)
{
    int can = sqrt(n);
    for (int i = 2; i <= can; ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
long long ueler(long long n)
{
    long long tmp = n;
    int can = sqrt(n);
    for (int i = 2; i <= can; ++i)
    {
        if (n % i == 0)
        {
            tmp -= tmp / i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
        tmp -= tmp / n;
    return tmp;
}
int sum_of_number(long long n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    long long n;
    scanf("%lld", &n);
    if (prime(sum_of_number(ueler(n))))
        printf("YES");
    else
        printf("NO");
    return 0;
}