#include <stdio.h>

#define             SIZE            101

void cmp_pairs(char *p1, char *p2, char *p3)
{   
    int i;
    
    for (i = 0; p1[i] != '\0'; ++i) {
        if (p1[i] == p2[i])
            p3[i] = '0';
        else
            p3[i] = '1';
    }

    p3[i] = '\0';
}

int main(void)
{
    char num1[SIZE];
    char num2[SIZE];

    scanf("%s%s", num1, num2);

    char cor_ans[SIZE];

    cmp_pairs(num1, num2, cor_ans);

    printf("%s", cor_ans);

    return 0;
}