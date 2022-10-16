#include <stdio.h>

#define             SIZE            101

int main(void)
{
    char original[SIZE];
    char translated[SIZE];

    scanf("%s%s", original, translated);

    int len_original;
    int len_translated;
    
    for (len_original = 0; original[len_original] != '\0'; ++len_original)
        ; //null statement

    for (len_translated = 0; translated[len_translated] != '\0'; ++len_translated)
        ; //null statement
    
    int i;

    for (i = 0; i < len_original; ++i) {
        if (original[i] != translated[len_original - 1 - i])
            break;   
    }

    if (i == len_original && len_original == len_translated)
        printf("YES");
    else
        printf("NO");

    return 0;
}