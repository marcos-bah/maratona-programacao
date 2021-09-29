#include <iostream>

int main(int argc, char const *argv[])
{
    int num_test, n;
    char letter[1];
    int c = 0, r = 0, s = 0;

    scanf("%d", &num_test);

    while (num_test--)
    {
        scanf("%d %c", &n, letter);
        if (letter[0] == 'C')
        {
            c += n;
        }
        else if (letter[0] == 'R')
        {
            r += n;
        }
        else
        {
            s += n;
        }
    }

    printf("Total: %d cobaias\n", (c + r + s));
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (float)c / ((float)c + (float)r + (float)s) * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)r / ((float)c + (float)r + (float)s) * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)s / ((float)c + (float)r + (float)s) * 100);

    return 0;
}
