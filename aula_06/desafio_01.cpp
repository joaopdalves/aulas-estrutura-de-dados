#include <iostream>
using namespace std;

int soma(int a, int b) {
    int resultado1 = a + b;
    return resultado1;
}

int sub(int a, int b) {
    int resultado2 = a - b;
    return resultado2;
}

int mult(int a, int b) {
    int resultado3 = a * b;
    return resultado3;
}

int divi(int a, int b) {
     int resultado4 = a / b;
     return resultado4;
}

int main() {

    int num1;
    int num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    int resultadoSoma = soma(num1, num2);
    int resultadoSub = sub(num1, num2);
    int resultadoMult = mult(num1, num2);
    int resultadoDivi = divi(num1, num2);

    cout << "A soma de " << num1 << " e " << num2 << " é: " << resultadoSoma << endl;
    cout << "A subtracao de " << num1 << " e " << num2 << " é: " << resultadoSub << endl;
    cout << "A multiplicacao de " << num1 << " e " << num2 << " é: " << resultadoMult << endl;
    cout << "A divisao de " << num1 << " e " << num2 << " é: " << resultadoDivi << endl;

    return 0;
}