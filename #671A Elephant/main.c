#include <stdio.h>

int main(void)
{
    int coord_house;

    scanf("%d", &coord_house);

    int min_step = (coord_house % 5 == 0) ? (coord_house / 5) : (coord_house / 5 + 1);

    printf("%d", min_step);

    return 0;
}