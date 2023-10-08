#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows = 0;
    int columns = 0;
    int i, j;

    printf("Saisissez un nombre de lignes pour le tableau : ");
    scanf("%d", &rows);
    printf("Saisissez un nombre de colonnes pour le tableau : ");
    scanf("%d", &columns);

    int **tab = malloc(rows * sizeof(int *));
    if (tab == NULL)
    {
        printf("Impossible d'allouer de la mémoire pour les lignes.\n");
        return 1;
    }

    for (i = 0; i < rows; i++)
    {
        tab[i] = malloc(columns * sizeof(int));
        if (tab[i] == NULL)
        {
            printf("Impossible d'allouer de la mémoire pour les colonnes de la ligne %d.\n", i);
            return 1;
        }

        for (j = 0; j < columns; j++)
        {
            printf("Saisissez la valeur pour tab[%d][%d] : ", i, j);
            scanf("%d", &tab[i][j]);
        }
    }

    printf("Tableau 2D saisi :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++)
    {
        free(tab[i]);
    }
    free(tab);

    return 0;
}
