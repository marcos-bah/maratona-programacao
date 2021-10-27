#include <iostream>

using namespace std;

//criar struct de grafo

struct grafo
{
    char inicio;
    char fim;
    char *prox;
} grafo;

int main(int argc, char const *argv[])
{

    int N;
    cin >> N;

    //criar grafo
    struct grafo *g = new struct grafo[N];

    while (N--)
    {
        int V, E;
        cin >> V >> E;
        while (E--)
        {
            char rota[2];
            cin >> rota[0] >> rota[1];
            g[V].inicio = rota[0];
            g[V].fim = rota[1];
        }
    }

    return 0;
}