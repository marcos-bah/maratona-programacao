#include <iostream>

using namespace std;

// funcao que retona o numero de divisores de n
int divisores(int n)
{
    int cont = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cont++;
        }
    }
    return cont;
}

int main(int argc, char const *argv[])
{
    int N, sum = 0;

    cin >> N;

    N++;
    while (N--)
    {
        sum += divisores(N);
    }

    cout << sum << endl;

    return 0;
}
