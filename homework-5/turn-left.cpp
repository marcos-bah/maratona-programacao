#include <iostream>
using namespace std;
int main()
{
    string x;
    int t;
    cin >> t;
    while (t != 0)
    {
        string x;
        cin >> x;
        int n = 1;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == 'D')
            {
                n++;
                if (n > 4)
                    n = 1;
            }
            if (x[i] == 'E')
            {
                n--;
                if (n == 0)
                    n = 4;
            }
        }
        if (n == 1)
            cout << "N" << endl;
        if (n == 2)
            cout << "L" << endl;
        if (n == 3)
            cout << "S" << endl;
        if (n == 4)
            cout << "O" << endl;
        cin >> t;
    }
    return 0;
}