#include <iostream>

int main(int argc, char const *argv[])
{
    int s, t, f, aux;

    scanf("%d %d %d", &s, &t, &f);
    aux = (s + t + f);
    printf("%d\n", ((aux < 0 ? aux += 24 : aux) % 24));

    return 0;
}
