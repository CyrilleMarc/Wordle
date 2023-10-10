#include <stdio.h>

int main()
{
    int numPlusGrand = 0;
    int numPlusPetit = 0;
    int numSaisiNumber = 1;
    int numSaisi = 0;

    printf("Entrez un premier entier: ");
    scanf("%d", &numSaisi);
    numPlusGrand = numPlusPetit = numSaisi;

    while (numSaisiNumber <= 5)
    {
        printf("nombre %d: ", numSaisiNumber);
        scanf("%d", &numSaisi);

        if (numPlusGrand < numSaisi)
        {
            numPlusGrand = numSaisi;
        }
        else if (numPlusPetit > numSaisi)
        {
            numPlusPetit = numSaisi;
        }
        ++numSaisiNumber;
    }
    printf("Nombre le plus grand : %d et nombre le plus petit : %d\n", numPlusGrand, numPlusPetit);
    return 0;
}