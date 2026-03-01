#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Digite um num: ";
	cin >> num;
	
	string paridade = (num % 2 == 0) ? "par" : "impar";
	
	cout << "O numero " << num << " e " << paridade << endl;
	
	return 0;
	
}
