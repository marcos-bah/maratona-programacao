#include <iostream>

int main(int argc, char const *argv[])
{
    int num_test = 0, s, tiros = 0;
    char saltos[51];

    std::cin >> num_test;
    while (num_test--)
    {
        std::cin >> s;

        int ss[s];

        for (int i = 0; i < s; ++i)
            std::cin >> ss[i];

        std::cin >> saltos;

        for (int i = 0; i < s; ++i)
        {
            if (saltos[i] == 'J')
            {

                if (ss[i] > 2)
                {

                    tiros += 1;
                }
            }
            else if (saltos[i] == 'S')
            {
                if (ss[i] <= 2)
                {

                    tiros += 1;
                }
            }
        }

        std::cout << tiros << std::endl;
        tiros = 0;
    }

    return 0;
}