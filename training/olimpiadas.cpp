#include <iostream>
//not resolved


int find_index_max(int c[], int max) {
    int aux = c[0];
    int index = 0;
    for (int i = 1; i < max; i++) {
        if (c[i] > aux) {
            aux = c[i];
            index = i;
        }
    }
    return index;
}

int main(int argc, char const *argv[])
{
    int m, n, o, p, b;
    
    std::cin >> n >> m;

    int classificacao[n][3];

    for (int i = 0; i < m; i++)
    {
        classificacao[i][0] = 0;
        classificacao[i][1] = 0;
        classificacao[i][2] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> o >> p >> b;
        classificacao[o][0] += 1;
        classificacao[p][1] += 1;
        classificacao[b][2] += 1;
    }



    for (int i = 1; i < n; i++)
    {
      
        

    }
	
	
    return 0;
}
