/*
exercices issus de :
https://www.lamsade.dauphine.fr/~manouvri/C/PolyExoC_MM.pdf
*/
#include <stdio.h>
int isEvenNumber(int *num);
int main()
{
    int num = 0;

    printf("Saisissez un entier: ");
    scanf("%d", &num);

    int ok = isEvenNumber(&num);
    {
        if (ok == 2)
        {
            printf("num %d is even\n ", num);
        }
        else
        {
            printf("num %d is odd\n ", num);
        }
    }
}

int isEvenNumber(int *num)
{
    int result = *num % 2;
    if (!result)
    {
        return 2;
    }
}