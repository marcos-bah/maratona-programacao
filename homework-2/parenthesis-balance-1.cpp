#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::string s;
    int inicio;
    int fim;

    

    while (std::getline(std::cin >> std::ws, s)){
        inicio = 0;
        fim = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                inicio++;
            }
            else if (s[i] == ')')
            {
                fim++;
                if(fim>inicio)
                {
                    break;
                }
            }
        }

        if(inicio == fim)
        {
            std::cout << "correct" << std::endl;
        }
        else
        {
            std::cout << "incorrect" << std::endl;
        }
    }
     
    return 0;
}