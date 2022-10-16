#include <stdio.h>

#define             SIZE            4

void bitpp(char* p1, int* p2)
{
    if (p1[0] == '+' || p1[2] == '+')
        *p2 += 1;
    else
        *p2 -= 1;
}

int main(void)
{
    int nstatements;

    scanf("%d", &nstatements);

    char operation[SIZE];
    int x = 0;

    while (nstatements--) {
        scanf("%s", operation);
        bitpp(operation, &x);
    }

    printf("%d", x);

    return 0;
}