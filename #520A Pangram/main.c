#include <stdio.h>
#include <ctype.h>

#define             SIZE            101
#define             ABC             26

int is_pangram(const char *p, int size)
{
    int letter_flags[ABC] = { 0 };

    while (size--)
        ++letter_flags[toupper(*p++) - 'A'];

    for (int i = 0; i < ABC; ++i) 
        if (letter_flags[i] == 0)
            return 0;
    
    return 1;
}

int main(void)
{   
    int n;
    char word[SIZE];

    scanf("%d%s", &n, word);

    if (is_pangram(word, n))
        printf("YES");
    else
        printf("NO");

    return 0;
}