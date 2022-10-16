#include <stdio.h>

#define             SIZE            100

int is_easy_problem(int *p, int n)
{
    for (int i = 0; i < n; ++i)
        if (p[i] == 1)
            return 0;
    
    return 1;
}

int main(void)
{
    int npeople;
    int opinions[SIZE];

    scanf("%d", &npeople);

    for (int i = 0; i < npeople; ++i)
        scanf("%d", &opinions[i]);
    
    if (is_easy_problem(opinions, npeople))
        printf("EASY");
    else
        printf("HARD");

    return 0;
}