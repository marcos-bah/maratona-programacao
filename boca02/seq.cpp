#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long int n, x;

    while (cin >> n && n != 0)
    {
        int seq[1001][2];
        int aux = 0;
        bool flag = true;
        int auxMaior = -1;
        int asn = 0;

        while (n--)
        {
            cin >> x;
            for (int j = 0; j < aux; j++)
            {
                if (x == seq[j][0])
                {
                    seq[j][1]++;
                    flag = false;
                }
            }

            if (flag)
            {

                seq[aux][0] = x;
                seq[aux][1] = 1;
                aux++;
            }
            flag = true;
        }

        for (int i = 0; i < aux; i++)
        {
            if (seq[i][1] > auxMaior)
            {
                auxMaior = seq[i][1];
                asn = seq[i][0];
            }
        }

        cout << asn << endl;
    }

    return 0;
}