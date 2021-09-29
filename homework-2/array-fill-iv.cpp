#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{

    int n = 15, num, par[5], impar[5], parIn = 0, imparIn = 0;

    while (n--)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
            par[parIn++] = num;
        else
            impar[imparIn++] = num;

        if (parIn == 5)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("par[%d] = %d\n", i, par[i]);
            }
            parIn = 0;
        }
        if (imparIn == 5)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("impar[%d] = %d\n", i, impar[i]);
            }
            imparIn = 0;
        }
    }

    for (int i = 0; i < imparIn; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < parIn; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}