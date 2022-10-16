#include <stdio.h>

#define             SIZE            4

void set_array(int *p, int size)
{
    while (size--)
        scanf("%d", p++);
}

int main(void)
{
    int hshoes[SIZE];
    set_array(hshoes, SIZE);

    int diff_hshoes[SIZE] = { 0 };
    int idx = 0;

    for (int i = 0; i < SIZE; ++i) {
        int flag = 0;
        for (int k = 0; k < SIZE; ++k) {
            if (hshoes[i] == diff_hshoes[k]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            diff_hshoes[idx++] = hshoes[i];
    }

    int min_hshoes = 0;

    for (int i = 0; i < SIZE; ++i)
        if(diff_hshoes[i] == 0)
            ++min_hshoes;
    
    printf("%d", min_hshoes);

    return 0;
}