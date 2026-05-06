#include <iostream>
using namespace std;

void imprimir(int n) {
    if (n == 0) { // Caso-base
        return;
    }
    else { // Caso recursivo
        cout << "recursão" << endl;
        imprimir(n - 1);
    }
}

int main() {
    imprimir(5);
    return 0;
}