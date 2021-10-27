#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int C, L;
    cin >> C >> L;

    int parede1[C], parede2[C];

    //linha 1
    for (int i = 0; i < C; i++)
    {
        cin >> parede1[i];
    }

    //linha 2
    for (int i = 0; i < C; i++)
    {
        cin >> parede2[i];
    }

    //achar soma de linha maior
    int maior = 0;
    for (int i = 0; i < C; i++)
    {
        if (parede1[i] + parede2[i] > maior)
        {
            maior = parede1[i] + parede2[i];
        }
    }

    std::cout.precision(1);
    cout << fixed << (double)((L - maior) * 0.5) << endl;

    return 0;
}
