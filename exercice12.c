#include <stdio.h>

#define TAILLE_MAX 10
int t[TAILLE_MAX] = {0, 12, 345, 56, 61, 99, 0, 11, 45, 100};

int main()
{
    int *pstart = NULL;
    int *pend = NULL;
    int *pNumber = NULL;

    pstart = &t[0];
    pend = &t[TAILLE_MAX - 1];

    for (pNumber = pstart; pNumber <= pend; ++pNumber)
    {
        if (*pNumber == 0)
        {
            printf("index = %ld et valeur = %d\n", (long)(pNumber - pstart), *pNumber);
        }
    }

    return 0;
}
