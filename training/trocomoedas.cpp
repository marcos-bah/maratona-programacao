#include <iostream>

int main(int argc, char const *argv[])
{

    std::ios_base::sync_with_stdio(false);
 	std::cin.tie(NULL);

    int n, troco = 0;
    int saida[6];

    std::cin >> n;

 

    saida[0] = (int)(n / 100);
    n -= saida[0] * 100;

    saida[1] = (int)(n / 50);
    n -= saida[1] * 50;

    saida[2] = (int)(n / 25);
    n -= saida[2] * 25;

    saida[3] = (int)(n / 10);
    n -= saida[3] * 10;

    saida[4] = (int)(n / 5);
    n -= saida[4] * 5;

    saida[5] = n;
    n -= saida[5];

    for (int i = 0; i < 6; i++)
    {
        troco += saida[i];
    }

    std::cout << troco << std::endl;

    for (int i = 0; i < 6; i++)
    {
        std::cout << saida[i] << std::endl;
    }

    return 0;
}
