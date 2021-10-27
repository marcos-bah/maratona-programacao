#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{

    string str;

    cin >> str;

    // str to upper
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }

    // verifica se string tem "zelda"

    if (str.find("ZELDA") != string::npos)
    {
        cout << "Link Bolado" << endl;
    }
    else
    {
        cout << "Link Tranquilo" << endl;
    }

    return 0;
}