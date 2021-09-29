#include <iostream>

int main(int argc, char const *argv[])
{
    int n, c, v, aux = 0;

    while (std::cin >> n && n)
    {

        for (int i = 0; i < n; i++)
        {
            std::cin >> c >> v;
            aux += v / 2;
        }

        std::cout << aux / 2 << std::endl;
        aux = 0;
    }

    return 0;
}