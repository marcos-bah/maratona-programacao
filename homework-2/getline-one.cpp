#include <iostream>
#include <string>
#include <bits/stdc++.h>


int main(int argc, char const *argv[])
{
    
    int n = 0, num, sum = 0;
    std::string temp;
    char c;
    scanf("%d", &n);

    while (std::getline(std::cin, temp))
    {
        scanf("%d", &num);
        c = getchar();
        n++;
        sum += num;
    }

    printf("%.1f\n", (float)sum / n);
    
    return 0;
}