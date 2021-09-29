#include <iostream>


int main(int argc, char const *argv[])
{
    double x, y;
    
    scanf("%lf %lf", &x, &y);
    if (y == x && x == 0){
        printf("Origem\n");
    } else if (y == 0){
        printf("Eixo X\n");
    } else if (x == 0){
        printf("Eixo Y\n");
    }else if (x >= 0 && y <= 0){
        printf("Q4\n");
    }else if (x <= 0 && y >= 0){
        printf("Q2\n");
    }else if (x <= 0 && y <= 0){
        printf("Q3\n");
    }else if (x >= 0 && y >= 0){
        printf("Q1\n");
    }
     
    return 0;
}