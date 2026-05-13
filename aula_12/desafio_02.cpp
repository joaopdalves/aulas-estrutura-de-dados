#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Paciente {
    string nome;
    int idade;
};

class FilaHospital {
public:
    void enfileirar(string nome, int idade) {
        lista.push_back({nome, idade});
    }

    void desenfileirar() {
        if (!lista.empty()) {
            lista.pop_front();
        }
    }

    void mostrarFilaSemRegra() {
        for (auto const& p : lista) {
            cout << p.nome << " (" << p.idade << " anos)" << endl;
        }
    }

    void mostrarFilaComRegra() {
        for (auto const& p : lista) {
            if (p.idade > 60) {
                cout << p.nome << " (" << p.idade << " anos) - Prioridade" << endl;
            }
        }
        for (auto const& p : lista) {
            if (p.idade <= 60) {
                cout << p.nome << " (" << p.idade << " anos)" << endl;
            }
        }
    }

private:
    list<Paciente> lista;
};

int main() {
    FilaHospital fila;

    fila.enfileirar("Paciente 1", 25);
    fila.enfileirar("Paciente 2", 70);
    fila.enfileirar("Paciente 3", 30);
    fila.enfileirar("Paciente 4", 65);
    fila.enfileirar("Paciente 5", 40);
    fila.enfileirar("Paciente 6", 80);
    fila.enfileirar("Paciente 7", 20);
    fila.enfileirar("Paciente 8", 62);
    fila.enfileirar("Paciente 9", 35);
    fila.enfileirar("Paciente 10", 50);
    fila.enfileirar("Paciente 11", 19);
    fila.enfileirar("Paciente 12", 45);
    fila.enfileirar("Paciente 13", 28);
    fila.enfileirar("Paciente 14", 55);
    fila.enfileirar("Paciente 15", 33);

    cout << "--- Fila Sem Regra ---" << endl;
    fila.mostrarFilaSemRegra();

    cout << "\n--- Fila Com Regra (Prioridade > 60) ---" << endl;
    fila.mostrarFilaComRegra();

    fila.desenfileirar();

    return 0;
}