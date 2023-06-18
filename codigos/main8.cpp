#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numQuadros = 64;
    unsigned long long int totalGraos = 0;
    unsigned long long int graosNoQuadro = 1;

    for (int i = 1; i <= numQuadros; i++) {
        totalGraos += graosNoQuadro;
        graosNoQuadro *= 2;
    }

    cout << "A somatória do número de grãos de trigo em um tabuleiro de xadrez é: " << totalGraos << endl;

    return 0;
}
