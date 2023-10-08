#include <stdio.h>

int main()
{

    int tab[3][10] = {{10, 20, 30, 40, 50, 60, 70, 80, 90, 10},
                      {10, 20, 30, 40, 50, 60, 70, 80, 90, 10},
                      {10, 20, 30, 40, 50, 60, 70, 80, 90, 10}};
    int(*pTab)[10] = tab;

    for (int i = 0; i < 3; i++)
    {
        printf("ligne %d - ", i + 1);
        for (int j = 0; j < 9; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    printf("Avec les pointeurs\n");

    for (int i = 0; i < 3; i++)
    {
        printf("ligne %d - ", i + 1);
        for (int j = 0; j < 9; j++)
        {
            printf("%d ", *(*(pTab + i) + j));
        }
        printf("\n");
    }

    return 0;
}