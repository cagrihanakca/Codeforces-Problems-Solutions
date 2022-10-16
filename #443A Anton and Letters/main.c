#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int letter_flags[26] = { 0 };

    while ((ch = getchar()) != '\n') 
        if (isalpha(ch)) 
            ++letter_flags[ch - 'a'];
    
    int dist_chars = 0;

    for (int i = 0; i < 26; ++i)
        if (letter_flags[i] != 0)
            ++dist_chars;
        
    printf("%d", dist_chars);

    return 0;
}