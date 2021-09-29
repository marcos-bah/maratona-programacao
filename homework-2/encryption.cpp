#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    std::string s;

    scanf("%d", &n);

    while (n--)
    {
        std::getline(std::cin >> std::ws, s);

        // three positions to the right
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
                s[i] += 3;
            }
        }
        
        // inversed string
        reverse(s.begin(), s.end());

        // half (truncate) string must be moved to the left by one position
        for (int i = (int)(s.length()/2); i < s.length() ; i++)
        {
            s[i] -= 1;
        }


        // print string
        printf("%s\n", s.c_str());
    }
    

    return 0;
}