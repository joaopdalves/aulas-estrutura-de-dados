#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Digite um num: ";
	cin >> num;
	
	if (num >= 10 && num <= 20) {
		cout << "O num esta no intervalo de 10 a 20." << endl;
	}
	
	else {
		cout << "O num esta fora do intervalo de 10 a 20." << endl;
	}
		
	return 0;
}
