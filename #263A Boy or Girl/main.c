#include <stdio.h>

#define             SIZE            101

int is_even(int val)
{
    return val % 2 == 0;
}

int is_girl(char *p)
{
    int letter_cnts[26] = { 0 };

    for (int i = 0; p[i] != '\0'; ++i)
        ++letter_cnts[p[i] - 'a'];
    
    int ndist_char = 0;

    for (int i = 0; i < 26; ++i)
        if (letter_cnts[i] != 0)
            ++ndist_char;
    
    if (is_even(ndist_char))
        return 1;
    
    return 0;
}

int main(void)
{
    char username[SIZE];

    scanf("%s", username);

    if (is_girl(username))
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    
    return 0;
}