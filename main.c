#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        return 0;
    }
    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    long long sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}