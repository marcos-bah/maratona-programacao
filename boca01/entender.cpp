#include <iostream>

int main(int argc, char const *argv[])
{
    
    int n, n1, n2, n3;
    std::cin >> n;

    while (n--)
    {
        std::cin >> n1 >> n2 >> n3;
        //ordenar
        if (n1 > n2)
        {
            int aux = n1;
            n1 = n2;
            n2 = aux;
        }
        if (n1 > n3)
        {
            int aux = n1;
            n1 = n3;
            n3 = aux;
        }
        if (n2 > n3)
        {
            int aux = n2;
            n2 = n3;
            n3 = aux;
        }
        std::cout << n1 << " " << n2 << " " << n3 << std::endl;
    }
    
    return 0;
}