#include <stdio.h>

#define             SIZE            100

void display_game_result(int xpass, const int *p1, int ypass, const int *p2, int nlevels)
{
    int level_flags[SIZE] = { 0 };

    for (int i = 0; i < xpass; ++i)
        ++level_flags[p1[i] - 1];
    
    for (int i = 0; i < ypass; ++i)
        ++level_flags[p2[i] - 1];
    
    int i;

    for (i = 0; i < nlevels; ++i) 
        if (level_flags[i] == 0)
            break;
        
    if (i == nlevels)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
}

void set_array(int *p, int size)
{
    while (size--)
        scanf("%d", p++);
}

int main(void)
{   
    int nlevels;

    scanf("%d", &nlevels);
    
    int pass_x;
    int idx_x[SIZE];

    scanf("%d", &pass_x);
    set_array(idx_x, pass_x);

    int pass_y;
    int idx_y[SIZE];

    scanf("%d", &pass_y);
    set_array(idx_y, pass_y);

    display_game_result(pass_x, idx_x, pass_y, idx_y, nlevels);

    return 0;
}