#include <iostream>

int main(int argc, char const *argv[])
{
    int x;
    double y;

    scanf("%d", &x);
    scanf("%lf", &y);

    printf("%.3f km/l\n", x/y);
    
    return 0;
}
