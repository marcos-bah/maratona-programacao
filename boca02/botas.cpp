#include <iostream>

int main(int argc, char const *argv[])
{
    int testes, n, m, aux, d[61], e[61];
    char l;

    std::cin >> testes;

    while (testes--)
    {
        std::cin >> n;
        aux = 0;
        for (int i = 30; i <= 60; i++)
        {
            d[i] = 0;
            e[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            std::cin >> m >> l;
            if (l == 'E')
            {
                e[m]++;
            }
            else
            {
                d[m]++;
            }
        }

        for (int i = 30; i <= 60; i++)
        {
            if (d[i] < e[i])
            {
                aux += d[i];
            }
            else
            {
                aux += e[i];
            }
        }
        std::cout << aux << std::endl;
    }
    return 0;
}