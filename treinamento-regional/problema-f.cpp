#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int C, premiacao = 100, auxPremiacao = 100, aux = 0;

    cin >> C;
    int vet[C];

    for (int i = 0; i < C; i++)
    {
        cin >> vet[i];
    }

    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            aux += vet[j];
        }
        if (auxPremiacao <= premiacao + aux)
        {
            auxPremiacao = premiacao + aux;
        }

        premiacao = 100;
        aux = 0;
    }

    cout << auxPremiacao << endl;

    return 0;
}