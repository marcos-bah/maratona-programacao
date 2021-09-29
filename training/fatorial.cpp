#include <iostream>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::cout <<  fatorial(n);
}
