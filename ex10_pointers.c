#include <stdio.h>

int main()
{
    char alphabet[27] = {0};
    int x = 0;
    char *pAlphabet = NULL;

    pAlphabet = alphabet;

    for (int i = 0; i < 26; ++i)
    {

        *pAlphabet = x + 'A';
        pAlphabet++;
    }
    pAlphabet = alphabet;

    for (int x = 0; x < 27; ++x)
    {

        putchar(*pAlphabet);
        printf("\n");
        pAlphabet++;
    }
    putchar('\n');
    return 0;
}