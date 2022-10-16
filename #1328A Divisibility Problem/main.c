#include <stdio.h>

void solve_divisibility_problem(void)
{
    int a, b;

    scanf("%d%d", &a, &b);

    int min_moves;

    if (a % b != 0) 
        min_moves = a / b * b + b - a;
    else
        min_moves = 0;

    printf("%d\n", min_moves);
}

int main(void)
{
    int t;
    
    scanf("%d", &t);

    while (t--)
        solve_divisibility_problem();

    return 0;
}