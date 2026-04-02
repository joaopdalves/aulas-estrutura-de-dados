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

class Carro {
private:
    string marca;
    string modelo;
    int ano;
    string cor;

public:
    Carro(string marca, string modelo, int ano, string cor) {
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        this->cor = cor;
    }

    void setMarca(string novaMarca) { marca = novaMarca; }
    string getMarca() { return marca; }

    void setModelo(string novoModelo) { modelo = novoModelo; }
    string getModelo() { return modelo; }

    void setAno(int novoAno) { ano = novoAno; }
    int getAno() { return ano; }

    void setCor(string novaCor) { cor = novaCor; }
    string getCor() { return cor; }

    void mostrarInfo() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Cor: " << cor << endl;
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

    Carro carro1("Mitsubishi", "Lancer", 2026, "Amarelo");

    carro1.mostrarInfo();

    carro1.setMarca("Toyota");
    carro1.setModelo("Corolla");
    carro1.setAno(2026);
    carro1.setCor("Branco");

    carro1.mostrarInfo();

    return 0;
}