#include <stdio.h>

int wrong_subtraction(int val, int ntimes)
{
    while (ntimes--) {
        if (val % 10 == 0)
            val /= 10;
        else
            val -= 1;
    }
    
    return val;
}

int main(void)
{
    int num, nsubtract;

    scanf("%d%d", &num, &nsubtract);

    int result_decreasing = wrong_subtraction(num, nsubtract);

    printf("%d", result_decreasing);

    return 0;
}