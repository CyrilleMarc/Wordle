

#include <stdio.h>

int main()
{
    char letter = 'A';

    for (letter = 'A'; letter <= 'Z'; ++letter)
    {
        printf("caractère = %c\n", letter);
        printf("code = %d\n", letter);
        printf("code hexadécimal = %x\n", letter);
    }
}