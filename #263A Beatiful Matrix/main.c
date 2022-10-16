#include <stdio.h>
#include <stdlib.h>

#define             ROW             5
#define             COL             5

int main(void)
{
    int matrix[ROW][COL];

    for (int i = 0; i < ROW; ++i) 
        for (int j = 0; j < COL; ++j) 
            scanf("%d", &matrix[i][j]);

    int i, j;
    int min_moves;

    for (i = 0; i < ROW; ++i) 
        for (j = 0; j < COL; ++j)
            if (matrix[i][j] == 1)
                goto OUT;
OUT:
    min_moves = abs(i - 2) + abs(j - 2);

    printf("%d", min_moves);

    return 0;
}