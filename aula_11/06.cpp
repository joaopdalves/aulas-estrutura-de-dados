#include <iostream>
using namespace std;

int soma_recursiva(int n) {
    if (n == 0) {
        return 0; // #caso base
    }
    else {
        return n + soma_recursiva(n - 1); // #caso recursivo
    }
}

int main() {
    cout << soma_recursiva(5) << endl;
    return 0;
}