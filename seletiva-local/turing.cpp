#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
#define MAX 30000
char fita[MAX]; // \0
int indCabecote = 0, indInput = 0;

int loop(int aux, string instructions, string input);

//function string to turing machine
void turing(string input, string instructions)
{
    int aux = 0;

    while (aux < instructions.length())
    {
        switch (instructions[aux])
        {
        case '>':
            indCabecote++;
            break;
        case '<':
            indCabecote--;
            break;
        case '+':
            fita[indCabecote]++;
            break;
        case '-':
            fita[indCabecote]--;
            break;
        case '.':
            cout << fita[indCabecote];
            break;
        case ',':
            if (input[indInput] != '\0')
            {
                fita[indCabecote] = input[indInput];
                indInput++;
            }
            else
            {
                fita[indCabecote] = '0';
                indInput = 0;
            }
            break;
        case '[':
            aux = loop(aux, instructions, input);
            break;
        case ']':
            break;
        case '#':
            for (int i = 0; i < 10; i++)
            {
                cout << fita[i];
            }
            break;
        default:
            break;
        }
        aux++;
    }
}

int loop(int aux, string instructions, string input)
{
    char guarda[MAX];
    int inicio;
    inicio = aux + 1;

    while (instructions[inicio] != ']')
    {
        guarda[inicio - aux - 1] = instructions[inicio];
        inicio++;
    }

    guarda[inicio - aux - 1] = ']';

    return inicio + 1;
}

int main(int argc, char const *argv[])
{
    int N, ctt = 0;
    string instancia;
    memset(fita, '0', MAX);

    turing("marrocos", "+[>,]<-[+.<-]");

    for (int i = 0; i < 10; i++)
    {
        cout << fita[i] << endl;
    }

    /*cin >> N;

    for (int i = 0; i < N; i++)
    {
        string instanciak;
        cin >> instancia;
        cin.ignore();
        getline(cin, instanciak);

        cout << "Instancia " << i + 1 << endl;
        cout << instanciak << endl;
        cout << endl;
    }*/

    return 0;
}