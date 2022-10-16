#include <stdio.h>

#define             SIZE            101

void swap(char *p1, char *p2)
{
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void)
{
    char str[SIZE];

    scanf("%s", str);

    int len;

    for (len = 0; str[len] != '\0'; ++len)
        ; //null statement

    for (int i = 0; i < len / 2 ; ++i) 
        for (int j = 0; j < (len - 2) - 2 * i; j += 2) 
            if (str[j] > str[j + 2])
                swap(&str[j], &str[j + 2]);

    printf("%s", str);

    return 0;
}