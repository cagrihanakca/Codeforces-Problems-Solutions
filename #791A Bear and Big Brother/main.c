#include <stdio.h>

int main(void)
{
    int limak_wgt, bob_wgt;

    scanf("%d%d", &limak_wgt, &bob_wgt);

    int year_cnt = 0;

    while (limak_wgt <= bob_wgt) {
        ++year_cnt;
        limak_wgt *= 3;
        bob_wgt *= 2;
    }

    printf("%d", year_cnt);

    return 0;
}