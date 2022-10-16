#include <stdio.h>

#define             SIZE            1000

int main(void)
{
    int nfriends, fence_height;
    int friends_heights[SIZE];

    scanf("%d%d", &nfriends, &fence_height);

    for (int i = 0; i < nfriends; ++i)
        scanf("%d", &friends_heights[i]);
    
    int min_width = 0;

    for (int i = 0; i < nfriends; ++i) {
        if (friends_heights[i] > fence_height)
            min_width += 2;
        else
            ++min_width;
    }

    printf("%d", min_width);

    return 0;
}