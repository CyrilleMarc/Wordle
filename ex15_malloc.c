#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int i, j;
    int temp = 0;

    printf("Saisissez le nombre d'éléments du tableau\n");
    scanf("%d", &n);

    int *tab = malloc(n * sizeof(int));
    if (tab == NULL)
    {
        printf("Impossible d'allouer de la mémoire \n");
        return 1;
    }

    printf("Saisissez %d entiers: \n", n);

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < n - 1; ++i)
    {
        for (j = 0; j < n - 1 - i; ++j)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    printf("Tableau trié :\n");
    for (i = 0; i < n; ++i)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    free(tab);

    return 0;
}
