#include <iostream>

int main()
{
    const double PI = 3.14159;
    double a, b, c;

    std::cin >> a >> b >> c;

    double triangulo = (a * c) / 2;
    double circulo = PI * c * c;
    double trapezio = ((a + b) / 2) * c;
    double quadrado = b * b;
    double retangulo = a * b;

    std::cout.precision(3);

    std::cout << "TRIANGULO: " << std::fixed << triangulo << std::endl;
    std::cout << "CIRCULO: "<< std::fixed << circulo << std::endl;
    std::cout << "TRAPEZIO: " << std::fixed << trapezio << std::endl;
    std::cout << "QUADRADO: " << std::fixed << quadrado << std::endl;
    std::cout << "RETANGULO: " << std::fixed << retangulo << std::endl;
    
    return 0;
}