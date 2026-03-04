#include <iostream>
using namespace std;

int main(){
	int a[5];
	
	for(int i = 0; i < 5; ++i){
		cout << "informe um valor: ";
		cin >> a[i];
	}
	
	cout << "valores informados: ";
	for (int i = 0; i < 5; ++i){
		cout << a[i] << " ";
	}
	return 0;
}
