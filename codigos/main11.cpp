#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    const int linhas = 10;
    const int colunas = 10;
    int matriz[linhas][colunas];

    cout << "Informe os elementos da matriz 10x10:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz[i][j];
        }
    }

    int maiorValor = matriz[0][0];
    int linhaMaiorValor = 0;
    int colunaMaiorValor = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaiorValor = i;
                colunaMaiorValor = j;
            }
        }
    }

    cout << "Localização do maior valor:" << endl;
    cout << "Linha: " << linhaMaiorValor << endl;
    cout << "Coluna: " << colunaMaiorValor << endl;

    return 0;
}
