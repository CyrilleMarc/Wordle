#include <stdio.h>

#define NB_LIGNES 5

int matrix[NB_LIGNES][NB_LIGNES] =
    {
        {0, 1, 2, 3, 4},
        {10, 11, 12, 13, 14},
        {20, 21, 22, 23, 24},
        {30, 31, 32, 33, 34},
        {40, 41, 42, 43, 44}};

void displayMatrix(int tab[NB_LIGNES][NB_LIGNES])
{
    int countRow, countColumn;
    for (countRow = 0; countRow < NB_LIGNES; ++countRow)
    {
        for (countColumn = 0; countColumn < NB_LIGNES; ++countColumn)
        {
            printf("%d", tab[countRow][countColumn]);
        }
    }
    printf("\n");
}

int main()
{
    displayMatrix(matrix);
    return 0;
}
