#include <iostream>
using namespace std;

int main(){
	int a[5];
	int soma = 0;
	
	for(int i = 0; i < 5; ++i){
	cout << "informe um valor: ";
		cin >> a[i];
	
	}
	
	for (int i = 0; i < 5; ++i) {
        if (a[i] > 0){
            soma += a[i];
            
		}
			
	}
	
	cout << "resultado: " << soma;
	
	return 0;
}
