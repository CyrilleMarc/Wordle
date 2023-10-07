#include <stdio.h>

int main()
{

    int t[100] = {0, 2, 6, 67, 98, 0, 456, 67};
    int size = sizeof(t[100] / sizeof(int));

    for (int i = 0; i < size; ++i)
    {
        t[i];
        printf("index %d = valeur %d\n", i, t[i]);
    }
}
