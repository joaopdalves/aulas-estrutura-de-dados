#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "Digite um num: ";
	cin >> num;
	
	if (num == 0){
		cout << "Zero.";
	}
	if (num > 1){
		cout << "Positivo";
	}
	if (num < 0){
		cout << "Negativo.";
	}
	
	return 0;
}
