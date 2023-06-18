#include <iostream>
#include <locale>

using namespace std;

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;
    cout << "Informe o tamanho do vetor: ";
    cin >> n;

    int vetor[n];

    cout << "Informe os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    bubbleSort(vetor, n);

    cout << "Vetor ordenado em ordem crescente: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
