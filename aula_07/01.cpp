#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
    string endereco;
    string profissao;

public:
    Pessoa(string nome, int idade, string endereco, string profissao) {
        this->nome = nome;
        this->idade = idade;
        this->endereco = endereco;
        this->profissao = profissao;
    }

    void setNome(string novoNome) {
        nome = novoNome;
    }

    string getNome() {
        return nome;
    }

    void setIdade(int novaIdade) {
        idade = novaIdade;
    }

    int getIdade() {
        return idade;
    }

    void setEndereco(string novoEndereco) {
        endereco = novoEndereco;
    }

    string getEndereco() {
        return endereco;
    }

    void setProfissao(string novaProfissao) {
        profissao = novaProfissao;
    }

    string getProfissao() {
        return profissao;
    }

    void mostrarInfo() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Endereço: " << endereco << endl;
        cout << "Profissão: " << profissao << endl;
    }
};

int main() {
    Pessoa pessoa1("João", 30, "Rua Principal, 123", "Engenheiro");

    pessoa1.mostrarInfo();

    pessoa1.setNome("Maria");
    pessoa1.setIdade(25);
    pessoa1.setEndereco("Avenida Secundária, 456");
    pessoa1.setProfissao("Médica");

    pessoa1.mostrarInfo();

    return 0;
}