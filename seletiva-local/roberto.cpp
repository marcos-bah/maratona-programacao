#include <iostream>

using namespace std;

int main()
{
    int n, x, soma = 0;

    cin >> n;

    while (n--)
    {
        cin >> x;

        for (int i = 0; i < x; i++)
        {
            soma = (i * 4) + 2 + soma;
        }

        cout << soma << endl;
        soma = 0;
    }

    return 0;
}