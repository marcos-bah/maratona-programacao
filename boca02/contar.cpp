#include <iostream>

void escreve_seq(int start, int end, int multiplo)
{
    for (int i = start; i <= end; i++)
    {
        if (i % multiplo != 0)
            std::cout << i << " ";
    }

    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    int i, f, x;

    std::cin >> i >> f >> x;

    while (i != f && f != x && x != 0)
    {
        escreve_seq(i, f, x);
        std::cin >> i >> f >> x;
    }
    return 0;
}