#include <iostream>
#include <list>

using namespace std;

class Fila{

    public:
    Fila(){}

    void enfilerar(int elemento){
        lista.push_back(elemento);
    }

    int deselnfilerar(){
        if (lista.empty())
        {
            return -1;
        }

        int elemento = lista.front();
        lista.pop_front();
        return elemento;
    }

    bool vazia(){
        return lista.empty();
    }

    private:
    list<int> lista;

};

int main(){
    Fila fila;

    fila.enfilerar(1);
    fila.enfilerar(2);
    fila.enfilerar(3);
    fila.deselnfilerar();
    
    return 0;
}