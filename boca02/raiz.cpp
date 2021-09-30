#include <iostream>
#include <math.h>

using namespace std;

int raiz(long int b, int n)
{

    int asn = 1;

    while (pow(asn, n) <= b)
    {
        asn++;
    }
    if ((b - pow(asn, n)) < (pow(asn - 1, n) - b))
    {
        return asn - 1;
    }
    return asn;
}

int main(int argc, char const *argv[])
{
    int n;
    long int b;

    while (cin >> b >> n && b != 0 && n != 0)
    {
        int raiz_enesima = raiz(b, n);
        cout << raiz_enesima << endl;
    }
    return 0;
}