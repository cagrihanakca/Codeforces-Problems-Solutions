#include <stdio.h>

#define             SIZE            51

int main(void)
{
    int nstones;
    char colors[SIZE];

    scanf("%d%s", &nstones, colors);

    int min_stones = 0;

    for (int i = 0; i < nstones - 1; ++i)
        if (colors[i] == colors[i + 1])
            ++min_stones;
    
    printf("%d", min_stones);

    return 0;
}