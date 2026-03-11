#include <iostream>
using namespace std;

int main(){
	
    int num[5];
	int soma = 0;
	int i;
	float media;

    for (i = 0; i < 5; i++){
        
		cout << "digite um numero: ";
        
		cin >> num[i];
        
		soma += num[i];
    }
    
    media = soma / 5;
    cout << "resultado: " << media;

    return 0;
}
