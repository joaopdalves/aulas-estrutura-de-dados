#include <iostream>

using namespace std;

int main() {
	int diaSemana;
	
	cout << "Digite o num do dia da semana (1-7): ";
	cin >> diaSemana;
	
	switch (diaSemana) {
		case 1:
			cout << "Domingo." << endl;
			break;
		case 2:
			cout << "Segunda-feira." << endl;
			break;
		case 3:
			cout << "Terca-feira." << endl;
			break;5
		case 4:
			cout << "Quarta-feira." << endl;
			break;
		case 5:
			cout << "Quinta-feira." << endl;
			break;
		case 6:
			cout << "Sexta-feira." << endl;
			break;
		case 7:
			cout << "Sabado." << endl;
			break;
		default:
			cout << "Dia invalid." << endl;
	}
	
	return 0;
}
