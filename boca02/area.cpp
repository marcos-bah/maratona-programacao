#include <iostream>

int main(int argc, char const *argv[])
{
    long int n, x, y, soma_area;

    while (std::cin >> n && n)
    {
        soma_area = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> x >> y;
            soma_area += x * y;
        }

        std::cout << soma_area << std::endl;
    }

    return 0;
}