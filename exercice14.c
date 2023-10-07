#include <stdio.h>

int iNb_days[13] = {0};

int displayMonth()
{
    for (int i = 1; i < 13; ++i)
    {
        if (i == 2)
        {
            iNb_days[i] = 28;
        }
        else if (((i % 2 == 0) && i > 7) || ((i % 2 != 0) && i <= 7))
        {
            iNb_days[i] = 31;
        }
        else
        {
            iNb_days[i] = 30;
        }
    }

    return 0;
}

int main()
{

    if (displayMonth() == 0)
    {
        for (int i = 1; i < 13; ++i)
        {
            printf("nombre de jours dans le mois %d\n", iNb_days[i]);
        }
    }
    return 0;
}
