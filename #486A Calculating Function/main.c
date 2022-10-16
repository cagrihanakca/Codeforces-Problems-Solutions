#include <stdio.h>

long long is_even(long long val)
{
    return val % 2 == 0;
}

long long func(long long n)
{
    return is_even(n) ? n / 2 : -n / 2 - 1;
}

int main(void)
{   
    long long num;

    scanf("%lld", &num);

    printf("%lld", func(num));

    return 0;
}