#include <iostream>
#include <string>

int main()
{

    int n, res = 0;
    std::cin >> n;
    std::string s;

    while (n--)
    {
        std::cin >> s;
        if (s[0] == s[2])
        {
            res = (s[2] - '0') * (s[0] - '0');
        }
        else
        {
            if (s[1] >= 'A' && s[1] <= 'Z')
            {
                res = (s[2] - '0') - (s[0] - '0');
            }
            else
            {
                res = (s[2] - '0') + (s[0] - '0');
            }
        }
        std::cout << res << std::endl;
    }

    return 0;
}