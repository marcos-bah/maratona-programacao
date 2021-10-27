#include <iostream>

using namespace std;

int main()
{

    int a;
    cin >> a;
    if (a <= 1)
        cout << "Top 1" << endl;
    else if (a <= 3)
        if (a > 1 && a <= 3)
            cout << "Top 3" << endl;
    if (a > 3 && a <= 5)
        cout << "Top 5" << endl;
    if (a > 5 && a <= 10)
        cout << "Top 10" << endl;
    if (a > 10 && a <= 25)
        cout << "Top 25" << endl;
    if (a > 25 && a <= 50)
        cout << "Top 50" << endl;
    if (a > 50 && a <= 100)
        cout << "Top 100" << endl;

    return 0;
}