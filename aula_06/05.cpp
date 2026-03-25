#include <iostream>
using namespace std;

int soma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main() {

    int x = 5;
    int y = 3;
    int resultadoSoma = soma(x, y);

    cout << "A soma de " << x << " e " << y << " é: " << resultadoSoma << endl;

    return 0;
}