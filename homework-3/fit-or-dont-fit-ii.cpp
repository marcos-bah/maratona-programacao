#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int num_test = 0, aux = 0;
    char a1[1000], b1[1000];
    std::string a, b;

    scanf("%d", &num_test);

    while (num_test--)
    {
        scanf("%s %s", a1, b1);

        a = a1;
        b = b1;

        if (a.length() >= b.length())
        {
            for (int i = 0; i < b.length(); i++)
            {
                if (a[a.length() - b.length() + i] == b[i])
                {
                    aux++;
                }
            }
            if (aux == b.length())
            {

                printf("encaixa\n");
            }
            else
            {
                printf("nao encaixa\n");
            }
            aux = 0;
        }
        else
        {
            printf("nao encaixa\n");
        }
    }

    return 0;
}
