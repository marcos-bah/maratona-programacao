#include <iostream>

bool is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main(int argc, char const *argv[])
{
    
    int n, num;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &num);
        if (is_perfect(num))
            printf("%d eh perfeito\n", num);
        else
            printf("%d nao eh perfeito\n", num);
    }
    
    return 0;
}