#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> A = {3, 1, 7, 2, 9};
    list<int> B = {6, 4, 8, 0, 5};
    list<int> C;

    for (int element : A)
        C.push_back(element);

    for (int element : B)
        C.push_back(element);

    C.sort();

    cout << "Lista A: ";
    for (int element : A)
        cout << element << " ";

    cout << "Lista B: ";
    for (int element : B)
        cout << element << " ";

    cout << "Lista C: ";
    for (int element : C)
        cout << element << " ";

    cout << endl;
    return 0;
}
