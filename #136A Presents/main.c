#include <stdio.h>

#define             SIZE            100

void print_array(int *p, int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", p[i]);
}

void set_array(int *p, int size)
{
    for (int i = 0; i < size; ++i)
        scanf("%d", &p[i]);
}

int main(void)
{
    int nfriends;
    int gift_receivers[SIZE];

    scanf("%d", &nfriends);

    set_array(gift_receivers, nfriends);

    int gift_givers[SIZE];

    for (int i = 0; i < nfriends; ++i) 
        gift_givers[gift_receivers[i] - 1] = i + 1;
    
    print_array(gift_givers, nfriends);

    return 0;
}