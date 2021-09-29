#include <iostream>

int main(int argc, char const *argv[])
{

    std::ios_base::sync_with_stdio(false);
 	std::cin.tie(NULL);

    int v[10];

    for (int i = 0; i < 10; i++)
    {
        std::cin >> v[i];
    }

    int busca;

    std::cin >> busca;

    for (int i = 0; i < 10; i++)
    {
        if (v[i] == busca)
        {
            std::cout << "SIM";
            return 0;
        }
    }

    std::cout << "NAO";
    return 0;
}