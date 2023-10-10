

#include <stdio.h>

int multiply(int *num1, int *num2);

int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;

    printf("Saisissez un entier:\n");
    scanf("%d", &num1);
    printf("Saisissez un entier:\n");
    scanf("%d", &num2);

    result = multiply(&num1, &num2);
    if (multiply)
    {
        printf("Le produit de %d x %d est : %d\n", num1, num2, result);
    }
    return 0;
}

int multiply(int *num1, int *num2)
{
    int result = *num1 * *num2;
    return result;
}