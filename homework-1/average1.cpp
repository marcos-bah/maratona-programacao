#include <iostream>

int main()
{
    double n1, n2;
    std::cin >> n1 >> n2;
    std::cout.precision(5);
    std::cout << "MEDIA = " << std::fixed << (n1 * 3.5 + n2 * 7.5) / 11 << std::endl;
    return 0;
}
