#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("Saisissez un entier : \n");
    scanf("%d", &num1);
    printf("Saisissez un entier : \n");
    scanf("%d", &num2);

    while (num2 != 0)
    {
        if (num2 % 2 != 0)
        {
            int operation = 2 * num1 * (num2 / 2);
            printf("%d x %d = %d * (%d - 1) + %d = %d\n", num1, num2, num1, (num2 - 1), num1, operation);
            num2 = num2 / 2;
        }
        else if (num2 % 2 == 0)
        {
            int operation = num1 * (num2 - 1) + num1;
            printf("%d x %d = (2 x %d) * (%d / 2) = %d\n", num1, num2, (2 * num1), (num2 / 2), operation);
            num2 = num2 - 1;
        }
    }
    return 0;
}
