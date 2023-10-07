#include <stdio.h>
#include <string.h>

void mirror(char *mot1, char *mot2);

int main()
{
    char mot1[11];
    char mot2[11];

    printf("saisissez un mot de 10 lettres maxi\n");
    scanf("%10s", mot1);

    mirror(mot1, mot2);

    printf("mot 1 = %s\n", mot1);
    printf("mot miroir = %s\n", mot2);
    return 0;
}

void mirror(char *mot1, char *mot2)
{

    int size = strlen(mot1);
    for (int i = 0; i < size; ++i)
    {
        mot2[i] = mot1[size - 1 - i];
    }
    mot2[size] = '\0';
}
