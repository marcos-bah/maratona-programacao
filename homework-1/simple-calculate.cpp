#include <iostream>

int main()
{
    int n1, n2;
    double n3, soma;

    std::cin >> n1 >> n2 >> n3;
    soma = n2 * n3;
    std::cin >> n1 >> n2 >> n3;
    soma += n2 * n3;

    std::cout.precision(2);

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << soma << std::endl;

    

    return 0;
}