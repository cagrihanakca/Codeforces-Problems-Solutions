#include <stdio.h>
#include <ctype.h>

#define             SIZE            101

void letter_changer(char *p)
{
    int uppercase_cnt = 0;
    int lowercase_cnt = 0;

    for (int i = 0; p[i] != '\0'; ++i) {
        if (isupper(p[i]))
            ++uppercase_cnt;
        else
            ++lowercase_cnt;
    }
    
    if (uppercase_cnt > lowercase_cnt) {
        for (int i = 0; p[i] != '\0'; ++i)
            if (islower(p[i]))
                p[i] = toupper(p[i]);
    }
    else {
        for (int i = 0; p[i] != '\0'; ++i)
            if (isupper(p[i]))
               p[i] = tolower(p[i]);
    }
}

int main(void)
{
    char word[SIZE];

    scanf("%s", word);

    letter_changer(word);
    
    printf("%s", word);

    return 0;
}