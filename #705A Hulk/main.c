#include <stdio.h>

int is_even(int val)
{
    return val % 2 == 0;
}

void display_feelings(int ntimes)
{
    for (int i = 0; i < ntimes; ++i) {
        if (is_even(i)) 
            printf("I hate ");
        else
            printf("I love ");

        if (i < ntimes - 1)
            printf("that ");
        else
            printf("it");
    }
}

int main(void)
{
    int nlayers;

    scanf("%d", &nlayers);

    display_feelings(nlayers);

    return 0;
}