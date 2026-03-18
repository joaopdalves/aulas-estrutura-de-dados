#include <iostream>
#include <list>
using namespace std;

int main() {
	
	int soma = 0;
	int mult = 1;
    
	list<float> numList;

    numList.push_back(10);
    numList.push_back(10);
    numList.push_back(10);
    numList.push_back(10);
    numList.push_back(10);

    for (auto element : numList) {
        soma += element;
        mult *= element;
        
    }

    cout << "Soma dos elementos: " << soma << endl;
     cout << "Mult dos elementos: " << mult << endl;

    return 0;
}
