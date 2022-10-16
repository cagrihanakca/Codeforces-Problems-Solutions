#include <stdio.h>

#define             SIZE            1000

int main(void)
{
    int nstops;
    scanf("%d", &nstops);

    int exiting_pax[SIZE];
    int entering_pax[SIZE];

    for (int i = 0; i < nstops; ++i)
        scanf("%d%d", &exiting_pax[i], &entering_pax[i]);

    int pax_on_tram = 0;
    int min_capacity = 0;

    for (int i = 0; i < nstops; ++i) {
        pax_on_tram = pax_on_tram - exiting_pax[i] + entering_pax[i];
        
        if (pax_on_tram > min_capacity)
            min_capacity = pax_on_tram;
    }
    
    printf("%d", min_capacity);

    return 0;
}