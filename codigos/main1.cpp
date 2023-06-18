#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numCavalos;
    int numFerraduras;

    cout << "Informe o número de cavalos: ";
    cin >> numCavalos;

    numFerraduras = numCavalos * 4;

    cout << "O número total de ferraduras necessárias é: " << numFerraduras << endl;

    return 0;
}
