#include <iostream>
#include <cmath>

using namespace std;

bool isFibo(long long n) {
    long long raiz1 = 5 * n * n + 4;
    long long raiz2 = 5 * n * n - 4;
    long long a = sqrt(raiz1);
    long long b = sqrt(raiz2);
    return a * a == raiz1 || b * b == raiz2;
}

int main() {
    long long n, i = 1, r = 0;
    while (cin >> n) {
        while (n >= i) {
            if (!isFibo(++r)) {
                i++;
            }
        }
        cout << r << endl;
    }

    return 0;
}