#include <stdio.h>

#define             SIZE            200001

int main(void)
{
    int nmagnets;

    scanf("%d", &nmagnets);

    int ch;
    int i = 0;
    int npoles = nmagnets * 2;
    char poles[SIZE];

    for (;;) {
        ch = getchar();

        if (ch == '0' || ch == '1')
            poles[i++] = ch;
        
        if (i == npoles)
            break;
    }

    poles[i] = '\0';

    int magnets_group = 1;

    for (int i = 1; i < npoles - 2; i += 2)
        if (poles[i] == poles[i + 1])
            ++magnets_group;

    printf("%d", magnets_group);

    return 0;
}