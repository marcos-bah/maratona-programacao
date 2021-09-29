#include <iostream>

int main()
{
    unsigned long int n1, n2, r;

    while (std::cin >> n1 >> n2){
        r = (n1 ^ n2);
        std::cout << r << std::endl;
    }

    return 0;
}