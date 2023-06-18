#include <iostream>

using namespace std;

int main() {
    int matriz1[4][4];
    int matriz2[4][4];
    int matrizMaior[4][4];

    cout << "Digite os elementos da primeira matriz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite os elementos da segunda matriz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrizMaior[i][j] = (matriz1[i][j] > matriz2[i][j]) ? matriz1[i][j] : matriz2[i][j];
        }
    }

    cout << "Matriz com os maiores elementos:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrizMaior[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
