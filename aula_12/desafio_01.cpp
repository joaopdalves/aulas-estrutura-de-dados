#include <iostream>
#include <list>
#include <string>

using namespace std;

class FilaAposentados {
public:

    void chegar(string nome) {
        lista.push_back(nome);
    }

    void receberPagamento() {
        if (!lista.empty()) {
            cout << "Atendendo: " << lista.front() << endl;
            lista.pop_front();
        } else {
            cout << "Fila vazia!" << endl;
        }
    }

    void mostrarFila() {
        cout << "--- Pessoas na Fila ---" << endl;
        if (lista.empty()) cout << "(Vazia)" << endl;
        for (auto const& nome : lista) {
            cout << nome << endl;
        }
        cout << "-----------------------" << endl;
    }

private:
    list<string> lista;
};

int main() {
    FilaAposentados fila;

    fila.chegar("João");
    fila.chegar("José");
    fila.chegar("Maria");
    fila.chegar("Lucia");
    fila.chegar("Fatima");

    cout << "Situacao inicial (5 pessoas prontas para receber):" << endl;
    fila.mostrarFila();

    cout << "\nProcessando pagamentos..." << endl;
    for(int i = 0; i < 5; i++) {
        fila.receberPagamento();
    }

    fila.chegar("Pedro");
    fila.chegar("Eulália");
    fila.chegar("Marcia");
    fila.chegar("Agenor");

    cout << "\nSituacao final (Apos a chegada de 4 novos aposentados):" << endl;
    fila.mostrarFila();

    return 0;
}