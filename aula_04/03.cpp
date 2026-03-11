#include <iostream>
using namespace std;

int main(){
	
    int n, n2;
	int contador = 0;
	
	cout << "digite um numero inteiro: ";
	cin >> n;
	n2 = n;
	

    while (n > 0) {
    	n /= 10;
        contador++;
    }
    
    cout << "o numero " << n2 << " tem: " << contador << " digitos ";

    return 0;
}
