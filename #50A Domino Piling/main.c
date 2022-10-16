#include <stdio.h>

int main(void)
{
    int short_edge, long_edge;

    scanf("%d%d", &short_edge, &long_edge);

    int max_dominoes = short_edge * long_edge / 2;

    printf("%d", max_dominoes);

    return 0;
}