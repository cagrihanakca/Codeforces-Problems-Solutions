#include <stdio.h>

int get_damaged_dragons(int punched, int tail_shut, int trampled, int in_panic, int ndragons)
{
    int damaged_dragons_cnt = 0;

    for (int i = 1; i <= ndragons; ++i) 
        if (i % punched == 0 || i % tail_shut == 0 || i % trampled == 0 || i % in_panic == 0)
            ++damaged_dragons_cnt;
    
    return damaged_dragons_cnt;
}

int main(void)
{
    int k, l, m, n, d;
    
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);

    printf("%d", get_damaged_dragons(k, l, m, n, d));

    return 0;
}