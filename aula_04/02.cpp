#include <iostream>
using namespace std;

int main(){
	
    int num;
    int contador = 0;
    int i;
    
	cout << "digite um numero inteiro: ";
    cin >> num;
    
    for (i = 1; i <= num; i++){
    if (i % 2 == 0){
    contador++;   
        
		}
	}
    
    cout << "a quantidade de numeros pares eh: " << contador;
    
    return 0;
}
