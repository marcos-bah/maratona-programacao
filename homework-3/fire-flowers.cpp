#include <iostream>

int dist(int x1, int y1, int x2, int y2)
{
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main(int argc, char const *argv[])
{
    int r1, x1, y1, r2, x2, y2;

    while (scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF)
    {
        if (r1 > r2)
        {
            if (dist(x1, y1, x2, y2) <= (r1 - r2) * (r1 - r2))
            {
                printf("RICO\n");
            }
            else
            {
                printf("MORTO\n");
            }
        }
        else
        {
            printf("MORTO\n");
        }
    }

    return 0;
}
