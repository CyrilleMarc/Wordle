#include <stdio.h>

#define TAILLE_MAX 10
int t[TAILLE_MAX] = {0, 12, 345, 56, 61, 99, 0, 11, 45, 100};

int main()
{
    int *pstart = NULL;
    int *pend = NULL;
    int *pCount = NULL;

    pstart = &t[0];
    pend = &t[TAILLE_MAX - 1];

    for (pCount = pstart; pCount <= pend; ++pCount)
    {
        if (*pCount == 0)
        {
            printf("index = %ld et valeur = %d\n", (long)(pCount - pstart), *pCount);
            int test = pCount - pstart;
            printf("resultat : %d \n", test);
        }
    }

    return 0;
}
