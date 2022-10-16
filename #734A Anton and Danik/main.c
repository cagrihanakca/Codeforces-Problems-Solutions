#include <stdio.h>

#define             SIZE            100001

int main(void)
{
    int ngames;
    scanf("%d", &ngames);

    (void)getchar();

    int score;
    int anton_win_cnt = 0;
    int danik_win_cnt = 0;

    while ((score = getchar()) != '\n') {
        if (score == 'A')
            ++anton_win_cnt;
        else
            ++danik_win_cnt;
    }

    if (anton_win_cnt > danik_win_cnt)
        printf("Anton");
    else if (anton_win_cnt < danik_win_cnt)
        printf("Danik");
    else
        printf("Friendship");
    
    return 0;
}