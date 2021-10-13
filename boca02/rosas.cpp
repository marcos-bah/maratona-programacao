#include <iostream>

using namespace std;

int flor[1000][1000];

int main(int argc, char const *argv[])
{
    int l, c, m, n, aux = 0, cont = 0;

    while (cin >> l >> c >> m >> n && l != 0 && c != 0 && m != 0 && n != 0)
    {
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> flor[i][j];
            }

            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    for (int k = i; k < i + m && k + m <= 1; k++)
                    {
                        for (int l = j; l < j + n && j + n <= c; l++)
                        {
                            cont += flor[k][l];
                            if (cont >= aux)
                            {
                                aux = cont;
                            }
                        }
                    }
                    cont = 0;
                }
            }
        }
        cout << aux << endl;
    }
    return 0;
}