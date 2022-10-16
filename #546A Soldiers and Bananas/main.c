#include <stdio.h>

int main(void)
{
    int cost_first, budget, wants_to_buy;

    scanf("%d%d%d", &cost_first, &budget, &wants_to_buy);

    int total_cost = 0;

    for (int i = 1; i <= wants_to_buy; ++i)
        total_cost += cost_first * i;
    
    int borrow_money = budget <= total_cost ? total_cost - budget : 0;

    printf("%d", borrow_money);

    return 0;
}