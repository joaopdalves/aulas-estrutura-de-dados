#include <iostream>
using namespace std;

int main(){
	
    int num[6];
	int maior;
	int menor;
	int i;

    for (i = 0; i < 6; i++){
        
		cout << "digite um numero: ";
        
		cin >> num[i];
        
    }
    
    maior = num[0];
    menor = num[0];
    
    for (i = 0; i < 6; i++){
    	
		if (num [i] > maior){
        maior = num [i] ;	
		}
		
		if (num[i] < menor){
		menor = num [i];
		}
		}
		
    cout << "maior numero do vetor: " << maior << endl;
    cout << "menor numero do vetor: " << menor << endl;
    

    return 0;
}
