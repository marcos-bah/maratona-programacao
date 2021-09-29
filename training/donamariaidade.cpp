#include <iostream>
int main(int argc, char const *argv[])
{
    int m, a, b;
    std::cin >> m >> a >> b;

    int c = m - (a+b);

    if (a>b && a>c){
        std::cout << a;
    }else if (b>a && b>c){
        std::cout << b;
    }else{
        std::cout << c;
    }
}
