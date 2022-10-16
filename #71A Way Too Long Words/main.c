#include <stdio.h>

#define             SIZE            101

void abbr_for_long_words(void)
{
    char word[SIZE];
    scanf("%s", word);

    int len;

    for (len = 0; word[len] != '\0'; ++len)
        ; //null statement

    if (len > 10)
        printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
    else
        printf("%s\n", word);
}

int main(void)
{
    int nword;
    scanf("%d", &nword);

    while (nword--) 
        abbr_for_long_words();
    
    return 0;
}