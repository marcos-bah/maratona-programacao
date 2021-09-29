#include <iostream>

int main(int argc, char const *argv[])
{

    std::ios_base::sync_with_stdio(false);
 	std::cin.tie(NULL);

    int n;

    std::cin >> n;

    std::cout << (n % 2 == 0 ? "S" : "N") << std::endl;
    std::cout << (n % 3 == 0 ? "S" : "N") << std::endl;
    std::cout << (n % 5 == 0 ? "S" : "N");

    return 0;
}