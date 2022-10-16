#include <stdio.h>

#define             SIZE            100

double pct_orange_juice(int *p, int nelems)
{
    double pure_juice = 0.;

    for (int i = 0; i < nelems; ++i) 
        pure_juice += p[i] / 100.;
    
    return 100. * pure_juice / nelems;
}

void set_array(int *p, int size)
{
    for (int i = 0; i < size; ++i)
        scanf("%d", &p[i]);
}

int main(void)
{
    int ndrinks;
    int vol_fractions[SIZE];

    scanf("%d", &ndrinks);

    set_array(vol_fractions, ndrinks);

    printf("%.12f", pct_orange_juice(vol_fractions, ndrinks));

    return 0;
}