#include <iostream>
//not resolved

int main(int argc, char const *argv[])
{

    std::ios_base::sync_with_stdio(false);
 	std::cin.tie(NULL);

    int n, pares = 0;

    std::cin >> n;

    int m[n]; 
    char p[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> m[i] >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(m[i] == m[j] && p[i] != p[j]) {
                pares++;
            }
        }
    }

    std::cout << pares << std::endl;
    
    return 0;
}