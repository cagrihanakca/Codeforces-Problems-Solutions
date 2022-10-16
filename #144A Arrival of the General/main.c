#include <stdio.h>

#define             SIZE            100

int *get_min_array(const int *p, int size)
{
    int *pmin = (int *)(p + size - 1);

    for (int i = size - 2; i >= 0 ; --i)
        if (p[i] < *pmin)
            pmin = (int *)(p + i);
    
    return pmin;
}

int *get_max_array(const int *p, int size)
{
    int *pmax = (int *)p;

    for (int i = 1; i < size; ++i)
        if (p[i] > *pmax)
            pmax = (int *)(p + i);
    
    return pmax;
}

void set_array(const int *p, int size)
{
    while (size--)
        scanf("%d", p++);
}

int main(void)
{
    int n;
    int a[SIZE];

    scanf("%d", &n);
    set_array(a, n);

    int *pmax = get_max_array(a, n);
    int *pmin = get_min_array(a, n);

    int min_seconds;

    if (pmax < pmin) 
        min_seconds = (pmax - a) + (a + n - pmin) - 1;
    else 
        min_seconds = (pmax - a) + (a + n - pmin) - 2;
    
    printf("%d\n", min_seconds);

    return 0;
}