#include <iostream>
//not resolved

#define MAX 1000000

int main(int argc, char const *argv[])
{

    std::ios_base::sync_with_stdio(false);
 	std::cin.tie(NULL);

    char n[MAX];
    int i = 0;

    std::cin >> n;

    while(n[i] != '\0'){
        std::cout << n[i] << " ";
        i++;
    }


    
    return 0;
}