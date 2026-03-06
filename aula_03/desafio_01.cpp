#include <iostream>
using namespace std;

int main() {
    int n
	int soma = 0;

    cout << "digite um numero inteiro positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "por favor, digite um numero maior." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            soma += i;
        }

        cout << "a soma dos numeros de 1 ate " << n << " eh: " << soma << endl;
    }

    return 0;
}
