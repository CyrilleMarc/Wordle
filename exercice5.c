/*
exercices issus de :
https://www.lamsade.dauphine.fr/~manouvri/C/PolyExoC_MM.pdf
*/
#include <stdio.h>

int largestNum(int *num1, int *num2, int *num3);

int main()
{
    int num1, num2, num3 = 0;

    printf("Entrez un entier: \n");
    scanf("%d", &num1);
    printf("Entrez un entier: \n");
    scanf("%d", &num2);
    printf("Entrez un entier: \n");
    scanf("%d", &num3);

    int result = largestNum(&num1, &num2, &num3);
    if (result == 1)
    {
        printf("Num %d est plus grand que %d et %d  :", num1, num2, num3);
    }
    else if (result == 2)
    {
        printf("Num %d est plus grand que %d et %d :", num2, num1, num3);
    }
    else if (result == 3)
    {
        printf("Num %d est plus grand que %d et %d :", num3, num1, num2);
    }
}
int largestNum(int *num1, int *num2, int *num3)
{
    if (*num1 > *num2 && *num1 > *num3)
    {
        return 1;
    }
    else if (*num2 > *num1 && *num2 > *num3)
    {
        return 2;
    }
    else if (*num3 > *num1 && *num3 > *num2)
    {
        return 3;
    }
}
