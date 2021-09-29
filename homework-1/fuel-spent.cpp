#include <iostream>

int main()
{
    double n1, n2;
    std::cin >> n1 >> n2;
    std::cout.precision(3);
    std::cout  << std::fixed << (n1 / 12) * n2 << std::endl;
    return 0;
}