#include <iostream>
using namespace std;

int main(){
	int num = 0;
	int soma = 0;
	int resultado = 0;
	
	for(int i = 1; i <= 5; ++i){
	cout << "informe um valor: ";
		cin >> num;
	}
	if (num > 0){
		soma += num;
	}
	
	soma = resultado;
	cout << "resultado: " << resultado;
	
	return 0;
}
