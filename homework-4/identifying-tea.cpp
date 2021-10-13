#include <iostream>
 
using namespace std;
 
int main() {
 
    int T, A, B, C, D, E, res = 0;

    cin >> T;
    cin >> A >> B >> C >> D >> E;

    if(T==A) res++;
    if(T==B) res++;
    if(T==C) res++;
    if(T==D) res++;
    if(T==E) res++;

    cout << res << endl;

    return 0;
}