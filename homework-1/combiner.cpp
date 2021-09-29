#include <iostream>
#include <string>

int main()
{
    int n, a, b;

    std::string str1, str2;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> str1 >> str2;
        a = 0;
        b = 0;
        for (int j = 0; j < 50; j++)
        {
            if(str1[j] == '\0') a = 1;
            if(str2[j] == '\0') b = 1;
            if(a == 1 && b == 1) break;
            if(a == 0) std::cout << str1[j];
            if(b == 0) std::cout << str2[j];
        }
        std::cout << std::endl;
    }
    return 0;
}