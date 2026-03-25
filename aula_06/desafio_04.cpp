#include <iostream>
using namespace std;

int soma(int vet[5]){

    int resultado = 0;

    for (int i = 0; i < 5; i++){

    resultado += vet[i];

    }

    return resultado;
}

int main(){

    int vet[5];

    for (int i = 0; i < 5; i++){

    cout << "Digite um numero: ";
    cin >> vet[i];

    }

    int resultado = soma(vet);
    
    cout << "A soma dos numeros do vetor eh: " << resultado << endl;
   
    return 0;
}