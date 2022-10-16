#include <stdio.h>

int is_even(int val)
{
    return val % 2 == 0;
}

int main(void)
{
    int wgt;

    scanf("%d", &wgt);

    if (is_even(wgt) && wgt != 2)
        printf("YES");
    else
        printf("NO");

    return 0;
}