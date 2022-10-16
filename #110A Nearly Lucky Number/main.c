#include <stdio.h>

int is_lucky(int val)
{
    return val == 4 || val == 7;
}

int is_nearly_lucky(long long val)
{
    int lucky_digits_cnt = 0;

    while (val) {
        if (is_lucky(val % 10))
            ++lucky_digits_cnt;
        val /= 10;
    }

    return is_lucky(lucky_digits_cnt);
}

int main(void)
{
    long long num;

    scanf("%lld", &num);

    if (is_nearly_lucky(num))
        printf("YES");
    else
        printf("NO");

    return 0;
}