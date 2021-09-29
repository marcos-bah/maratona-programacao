#include <iostream>

int main()
{
    int s, m, h;
    std::cin >> s;

    m = s/60;
    h = m/60;
    s = (int)s%60;

    std::cout << h << ":" << (int) m % 60 << ":" << s << std::endl;
    
    return 0;
}