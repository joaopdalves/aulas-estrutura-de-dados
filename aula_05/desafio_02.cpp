#include <iostream>
#include <list>
using namespace std;

int main() {
    
	list<string> minhaLista = {"matheus", "bruno", "gustavo", "adriano", "joao"};

    cout << "Ordem original: ";
    for (auto element : minhaLista) {
        cout << element << " ";
    }
    cout << endl;

    minhaLista.reverse();

    cout << "Ordem invertida: ";
    for (auto element : minhaLista) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
