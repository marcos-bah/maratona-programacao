#include <stdio.h>
#include <string.h>
#include <stdbool.h>

unsigned short enigma(char *, char *);

int main()
{
    char teste[10501];
    char cifra[10501];

    scanf("%s %s", cifra, teste);
    enigma(cifra, teste);

    printf("%hu\n", enigma(cifra, teste));
    return 0;
}

unsigned short enigma(char *cifra, char *teste)
{

    bool igualdades = false;
    unsigned short i, j, k;
    unsigned aux = strlen(cifra) - strlen(teste);
    unsigned short max;

    i = j = k = 0;
    igualdades = 0;
    max = 0;

    if (!aux)
    {

        while (cifra[i])
        {

            if (cifra[i] == teste[j])
            {
                igualdades = true;
                break;
            }

            i++;
            j++;
        }

        if (!igualdades)
            return 1;
        else
            return 0;
    }

    while (k <= aux)
    {

        j = 0;
        i = k;
        igualdades = 0;
        while (cifra[i] && teste[j])
        {

            if (cifra[i] == teste[j])
            {

                igualdades = true;
                break;
            }

            ++j;
            ++i;
        }

        k++;

        if (!igualdades)
            max++;
    }

    return max;
}