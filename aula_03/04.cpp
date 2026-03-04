#include <iostream>
using namespace std;

int main(){
	int a[5], b[5], c[5];
	
	cout << "vetor a:" << endl;
	for(int i = 0; i < 5; ++i){
		cout << "informe um valor: ";
		cin >> a[i];
	}
	cout << "                " << endl;
	cout << "vetor b:" << endl;
	for(int i = 0; i < 5; ++i){
		cout << "informe um valor: ";
		cin >> b[i];
	}
	    cout << "                " << endl;
		cout << "soma dos valores:" << endl;
	for(int i = 0; i < 5; ++i){
		c [i] = a[i] + b[i];
		cout << c[i] << endl;
	}
	return 0;
}
