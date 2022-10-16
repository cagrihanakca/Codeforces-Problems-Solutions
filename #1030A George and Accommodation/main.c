#include <stdio.h>

#define             SIZE            100

int main(void)
{   
    int nrooms;
    int already_live[SIZE];
    int rooms_capacity[SIZE];

    scanf("%d", &nrooms);

    for (int i = 0; i < nrooms; ++i)
        scanf("%d%d", &already_live[i], &rooms_capacity[i]);
    
    int free_place_cnt = 0;

    for (int i = 0; i < nrooms; ++i)
        if (already_live[i] + 2 <= rooms_capacity[i])
            ++free_place_cnt;
    
    printf("%d", free_place_cnt);

    return 0;
}