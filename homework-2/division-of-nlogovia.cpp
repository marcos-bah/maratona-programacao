#include <iostream>


int main(int argc, char const *argv[])
{
    int k, m, n, x, y;

    scanf("%d", &k);
    scanf("%d %d", &m, &n);

    while (k--){
        scanf("%d %d", &x, &y);
        if (y == n || x == m){
            printf("divisa\n");
        }else if (x >= m && y <= n){
            printf("SE\n");
        }else if (x <= m && y >= n){
            printf("NO\n");
        }else if (x <= m && y <= n){
            printf("SO\n");
        }else if (x >= m && y >= n){
            printf("NE\n");
        }
        if(k==0){
            scanf("%d", &k);
            if(k!=0) scanf("%d %d", &m, &n);
        }
    } 
    

    return 0;
}