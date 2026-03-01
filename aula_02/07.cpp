#include <iostream>
using namespace std;

int main(){
	int nota;
	
	cout << "Digite a nota do aluno: ";
	cin >> nota;
	
	if (nota >= 6){
		cout << "Aluno aprovado!";
	}
	
	else {
		cout << "Aluno reprovado!";
	}
	
}
