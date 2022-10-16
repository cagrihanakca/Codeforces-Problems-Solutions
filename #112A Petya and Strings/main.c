#include <stdio.h>
#include <ctype.h>

#define             SIZE            101

int lexicographical_compare(char *p1, char *p2)
{
    for (int i = 0; p1[i] != '\0'; ++i)
        if (toupper(p1[i]) < toupper(p2[i]))
            return -1;
        else if (toupper(p2[i]) < toupper(p1[i]))
            return 1;
    
    return 0;
}

int main(void)
{
    char str1[SIZE];
    char str2[SIZE];

    scanf("%s%s", str1, str2);

    printf("%d", lexicographical_compare(str1, str2));

    return 0;
}