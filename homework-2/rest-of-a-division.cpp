#include <iostream>


int main(int argc, char const *argv[])
{
    
    int a, b;
    std::cin >> a >> b;
    if(a>b){
        for (int i = b+1; i < a; i++)
        {
            if(i%5 == 2 || i%5 == 3){
                std::cout << i << std::endl;
            }
        }
    }
    else{
        for (int i = a+1; i < b; i++)
        {
            if(i%5 == 2 || i%5 == 3){
                std::cout << i << std::endl;
            }
        }
    }
    return 0;
}