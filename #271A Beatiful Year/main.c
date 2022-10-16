#include <stdio.h>

int is_distinct_digits(int val)
{
    int digits_cnt[10] = { 0 };

    while (val) {
        ++digits_cnt[val % 10];
        val /= 10;
    }

    for (int i = 0; i < 10; ++i) 
        if (digits_cnt[i] > 1)
            return 0;

    return 1;
}

int main(void)
{
    int year;

    scanf("%d", &year);

    int i = year + 1;

    while (!is_distinct_digits(i))
        ++i;

    printf("%d", i);

    return 0;
}