#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
    string endereco;
    string profissao;
    string cpf;
    string rg;

public:
    Pessoa(string nome, int idade, string endereco, string profissao, string cpf, string rg) {
        this->nome = nome;
        this->idade = idade;
        this->endereco = endereco;
        this->profissao = profissao;
        this->cpf = cpf;
        this->rg = rg;
    }

    void setNome(string novoNome) { nome = novoNome; }
    string getNome() { return nome; }

    void setIdade(int novaIdade) { idade = novaIdade; }
    int getIdade() { return idade; }

    void setEndereco(string novoEndereco) { endereco = novoEndereco; }
    string getEndereco() { return endereco; }

    void setProfissao(string novaProfissao) { profissao = novaProfissao; }
    string getProfissao() { return profissao; }

    void setCpf(string novoCpf) { cpf = novoCpf; }
    string getCpf() { return cpf; }

    void setRg(string novoRg) { rg = novoRg; }
    string getRg() { return rg; }

    void mostrarInfo() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Endereço: " << endereco << endl;
        cout << "Profissão: " << profissao << endl;
        cout << "CPF: " << cpf << endl;
        cout << "RG: " << rg << endl;
    }
};

int main() {
    Pessoa pessoa1("João", 30, "Rua Principal, 123", "Engenheiro", "123.456.789-00", "12.345.678-9");

    pessoa1.mostrarInfo();

    pessoa1.setNome("Maria");
    pessoa1.setIdade(25);
    pessoa1.setEndereco("Avenida Secundária, 456");
    pessoa1.setProfissao("Médica");
    pessoa1.setCpf("987.654.321-00");
    pessoa1.setRg("98.765.432-1");

    pessoa1.mostrarInfo();

    return 0;
}