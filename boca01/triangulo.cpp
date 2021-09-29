#include <bits/stdc++.h>

int v[4];

int main()
{
    int n;
    std::cin >> n;
    while (n--)
    {
        std::cin >> v[0];
        for (int i = 1; i < 4; ++i)
            std::cin >> v[i];
           
        std::sort(v, v + 4);
        int aux = 0;

        do
        {
            int a = v[0], b = v[1], c = v[2];
           
            if (a < b + c && abs(b - c) < a)
            {
                if (b < a + c && abs(a - c) < b)
                {
                    if (c < a + b && abs(a - b) < c)
                    {
                        std::cout << "S\n";
                        aux = 1;
                        break;
                    }
                }
            }
        }while(std::next_permutation(v, v + 4));
       
        if (aux == false) std::cout << "N\n";
    }
}