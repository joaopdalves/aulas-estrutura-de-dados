#include <iostream>
using namespace std;

double fatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * fatorial(n - 1); 
    }
}

int main() {
    int num;

    cout << "Digite um numero para calcular o fatorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Nao existe fatorial de numero negativo!" << endl;
    } else {
        cout << "O fatorial de " << num << " e: " << fatorial(num) << endl;
    }

    return 0;
}