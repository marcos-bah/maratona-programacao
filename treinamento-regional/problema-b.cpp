#include <iostream>

using namespace std;

// Função que calcula o número fatoriais que dao o resultado do problema
int fatorial(int n)
{
    int fat = 1;
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

int found(int n, int original)
{
    int soma = 0, aux = 1;
    n--;
    soma += fatorial(n);
    while (n--)
    {
        soma += fatorial(n);
        aux++;
        if (fatorial(original) > soma)
        {
            soma -= fatorial(n);
            aux--;
        }
    }
    return aux;
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    cout << found(N, N) << endl;

    return 0;
}