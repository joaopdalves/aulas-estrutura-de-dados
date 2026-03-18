#include <iostream>
#include <list>
using namespace std;

int main() {
    
	list<float> numList = {10.1, 20.2, 30.3, 40.2, 22.1};

    int size = numList.size();

    cout << "Size of the List is: " << size;

    return 0;
}
