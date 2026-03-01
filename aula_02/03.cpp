#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "Digite um num: ";
	cin >> num;
	
	if (num > 0){
		cout << "Positivo." << endl;
	} 
	
	else if (num < 0){
		cout << "Negativo." << endl;
	} 
	
	else {
		cout << "Zero." << endl;
	}
	
	return 0;
}
