#include <iostream>

int main(int argc, char const *argv[])
{
    int num_test;

    scanf("%d", &num_test);
    num_test *= 4;

    for (int i = 1; i <= num_test; i++)
    {
        if (i % 4 == 0)
        {
            printf("PUM\n");
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}
