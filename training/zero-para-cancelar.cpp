#include <iostream>

using namespace std;

#define MAX 100000

int main()
{
    int N, ctt = 0, sum = 0, aux;
    int vet[MAX];

    cin >> N;

    /*
    N[5] = 2
    N[4] = 3
    N[3] = 5
    N[2] = 0 -> ctt = 0, N[2+1+ctt] = 0
    N[1] = 0 -> ctt = 2, N[1+1+ctt] = 0
    N[0] = 0 -> ctt = 4, N[0+1+ctt] = 0
    */

    aux = N;
    while (N--)
    {
        cin >> vet[N];
        if (vet[N] == 0)
        {
            if (vet[N + 1 + ctt] == 0)
            {
                int c = 0;
                while (true)
                {
                    c++;
                    if (vet[N + 1 + ctt + c] != 0)
                    {
                        vet[N + 1 + ctt + c] = 0;
                        break;
                    }
                }
            }
            else
            {
                vet[N + 1 + ctt] = 0;
            }

            ctt += 2;
        }
        else
        {
            ctt = 0;
        }
    }

    for (int i = 0; i < aux; i++)
    {
        //cout << vet[i] << endl;
        sum += vet[i];
    }

    cout << sum << endl;

    return 0;
}
