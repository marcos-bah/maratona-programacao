#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    std::cout.precision(5);

    //bhaskara
    double delta = b * b - 4 * a * c;

    if(delta < 0 || a == 0)
    {
        std::cout << "Impossivel calcular" << std::endl;
    }
    else
    {
        //raizes
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "R1 = " << std::fixed << x1 << std::endl;
        std::cout << "R2 = " << std::fixed << x2 << std::endl;
    }

    return 0;
}