#include <stdio.h>

#define             SIZE            50

int main(void)
{
    int nparticipants, kth_place;

    scanf("%d%d", &nparticipants, &kth_place);

    int scores[SIZE];
    
    for (int i = 0; i < nparticipants; ++i)
        scanf("%d", &scores[i]);
    
    int score_kth_place = scores[kth_place - 1];
    int next_round_participants = 0;

    for (int i = 0; i < nparticipants; ++i) 
        if (scores[i] > 0 && scores[i] >= score_kth_place)
            ++next_round_participants;
    
    printf("%d", next_round_participants);

    return 0;
}