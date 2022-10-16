#include <stdio.h>

int are_sure_solution(int answer1, int answer2, int answer3)
{
    return answer1 + answer2 + answer3 >= 2;
}

int main(void)
{
    int nprob;
    scanf("%d", &nprob);

    int petya, vasya, tonya;
    int solution_cnt = 0;

    while (nprob--) {
        scanf("%d%d%d", &petya, &vasya, &tonya);

        if (are_sure_solution(petya, vasya, tonya))
            ++solution_cnt;
    }

    printf("%d", solution_cnt);

    return 0;
}