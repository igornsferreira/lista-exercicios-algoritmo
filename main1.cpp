#include <iostream>

using namespace std;

int main() {
    int numCavalos;
    int numFerraduras;

    cout << "Informe o número de cavalos: ";
    cin >> numCavalos;

    numFerraduras = numCavalos * 4;

    cout << "O número total de ferraduras necessárias é: " << numFerraduras << endl;

    return 0;
}
