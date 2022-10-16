#include <stdio.h>

#define             SIZE            51

void swap(char *p1, char *p2)
{
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void)
{
    int nchildren, ntimes;
    char queue[SIZE];

    scanf("%d%d%s", &nchildren, &ntimes, queue);
    
    for (int i = 0; i < ntimes; ++i) {
        for (int j = 0; j < nchildren - 1; ++j) {
            if (queue[j] == 'B' && queue[j + 1] == 'G') {
                swap(&queue[j], &queue[j + 1]);
                ++j;
            }
        }
    }

    printf("%s", queue);

    return 0;
}