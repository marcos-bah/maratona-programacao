#include <iostream>
int main(int argc, char const *argv[])
{
    int p, d, d2;
    std::cin >> p >> d >> d2;
    
    if((d+d2) % 2 == p%2){
        std::cout << 0;
    }else{
        std::cout << 1;
    }
    return 0;
}
