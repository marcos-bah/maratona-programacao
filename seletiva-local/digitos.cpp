#include <iostream>

using namespace std;

// funcao que retorna o binario do numero
string binario(int n)
{
    string s;
    while (n != 0)
    {
        s = (n % 2 == 0 ? "0" : "1") + s;
        n /= 2;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    int N;

    cin >> N;

    while (N--)
    {
        int a, sum = 0;
        cin >> a;
        string bin = binario(a);
        for (int i = 0; i < bin.length(); i++)
        {
            sum += bin[i] - '0';
        }
        cout << sum << endl;
    }
    return 0;
}
