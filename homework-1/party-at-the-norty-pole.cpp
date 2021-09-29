#include <iostream>

int main()
{
    int n, aux = 0;

    std::cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> vet[i];
        if(vet[i] > aux){
            aux = vet[i];
        }
    }

    std::cout << aux+1 << std::endl;
    
    return 0;
}