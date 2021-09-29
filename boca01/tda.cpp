#include <stdio.h>

void simplify(int n, int d){
    if(n % 2 == 0 && d % 2 == 0){
        simplify(n/2, d/2);
    }else if(n % 3 == 0 && d % 3 == 0){
        simplify(n/3, d/3);
    }else if(n % 5 == 0 && d % 5 == 0){
        simplify(n/5, d/5);
    }else if(n % 7 == 0 && d % 7 == 0){
        simplify(n/7, d/7);
    }else if(n % n == 0 && d % n == 0 && n != 1 && n != -1){
        simplify(n/n, d/n);
    }else{
        printf(" = %d/%d\n", n, d);   
    }
}

int main(int argc, char const *argv[])
{
    int n, n1, d1, n2, d2;
    char op0[1], op[1];

    scanf("%d", &n);

    while(n--){
        scanf("%d / %d %c %d / %d", &n1, &d1, op, &n2, &d2);
        switch (op[0])
        {
        case '+':
            printf("%d/%d", (n1 * d2 + n2 * d1), d1 * d2);
            simplify((n1 * d2 + n2 * d1), d1 * d2);
            break;
        case '-':
            printf("%d/%d", (n1 * d2 - n2 * d1), d1 * d2);
            simplify((n1 * d2 - n2 * d1), d1 * d2);
            break;
        case '*':
            printf("%d/%d", (n1 * n2), d1 * d2);
            simplify((n1 * n2), d1 * d2);
            break;
        case '/':
            printf("%d/%d", (n1 * d2), n2 * d1);
            simplify((n1 * d2), n2 * d1);
            break;
        default:
            break;
        }
    }

    return 0;
}