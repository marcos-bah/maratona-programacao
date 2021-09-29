#include <iostream>


int main()
{
    int x, y;
    std::cin >> x >> y;
    int sum = 0;
    
    if(x>y) {
        for(int i=x-1; i>y; i--) {
            if(i%2 != 0) {
                sum += i;

            }
        }
    } else {
        for(int i=x+1; i<y; i++) {
            if(i%2 != 0) {
                sum += i;

            }
        }
    }

    std::cout << sum << std::endl;
    return 0;
}