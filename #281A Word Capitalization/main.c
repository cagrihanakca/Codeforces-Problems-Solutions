#include <stdio.h>
#include <ctype.h>

#define             SIZE            1001

void word_capitalization(char *p)
{
    p[0] = toupper(p[0]);
}

int main(void)
{
    char word[SIZE];

    scanf("%s", word);

    word_capitalization(word);

    printf("%s", word);

    return 0;
}