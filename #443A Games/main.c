#include <stdio.h>

#define             SIZE            30

int get_games_in_guest_uniform(const int *phome, const int *pguest, int nteams)
{
    int games_cnt = 0;

    for (int i = 0; i < nteams; ++i) 
        for (int j = 0; j < nteams; ++j) 
            if (phome[i] == pguest[j])
                ++games_cnt;

    return games_cnt;
}

void set_arrays(int *p1, int *p2, int size)
{
    while (size--)
        scanf("%d%d", p1++, p2++);
}

int main(void)
{
    int n;
    int h[SIZE];
    int a[SIZE];

    scanf("%d", &n);
    set_arrays(h, a, n);

    printf("%d", get_games_in_guest_uniform(h, a, n));

    return 0; 
}