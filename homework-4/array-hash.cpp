#include <stdio.h>
#include <string.h>

int main()
{

    int n, palavras, acumulador, i, j;
    char texto[51];
    scanf("%d", &n);

    while (n--)
    {

        scanf("%d", &palavras);
        acumulador = 0;

        for (i = 0; i < palavras; i++)
        {

            scanf("%s", texto);

            for (j = 0; j < strlen(texto); j++)
                acumulador += (int)texto[j] - 65 + i + j;
        }

        printf("%d\n", acumulador);
    }

    return 0;
}