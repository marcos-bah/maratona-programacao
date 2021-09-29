#include <iostream>

int main(int argc, char const *argv[])
{
    int n, g, asn = 0;
    std::cin >> n >> g;

    char c[n];
    int v[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> c[i] >> v[i];
    }

    int x;
    std::cin >> x;

    char cc[x];
    for (int i = 0; i < x; i++)
    {
        std::cin >> cc[i];
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cc[i] == c[j])
            {
                asn += v[j];
                break;
            }
        }
    }

    printf("%d\n", asn);
    if (asn < g)
    {
        printf("My precioooous\n");
    }
    else
    {
        printf("You shall pass!\n");
    }

    return 0;
}
