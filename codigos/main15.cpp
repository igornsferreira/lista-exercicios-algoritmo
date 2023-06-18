#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void preencherMatrizAleatoria(int matriz[][3]) {
    srand(time(0));
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 101 - 50;
        }
    }
}

int contarZeros(int matriz[][3]) {
    int contador = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 0) {
                contador++;
            }
        }
    }
    
    return contador;
}

int main() {
    int matriz[3][3];
    
    preencherMatrizAleatoria(matriz);
    
    cout << "Matriz gerada:" << endl;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    int quantidadeZeros = contarZeros(matriz);
    
    cout << "Quantidade de zeros na matriz: " << quantidadeZeros << endl;
    
    return 0;
}
