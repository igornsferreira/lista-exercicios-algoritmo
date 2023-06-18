#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int N;
    cout << "Informe o tamanho dos vetores A e B: ";
    cin >> N;

    int A[N], B[N], C[N], D[N];

    // Ler os vetores A e B
    cout << "Informe os elementos do vetor A:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "Informe os elementos do vetor B:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    // Calcular a soma dos elementos de A
    int somaA = 0;
    for (int i = 0; i < N; i++) {
        somaA += A[i];
    }

    // Calcular a soma dos elementos de B
    int somaB = 0;
    for (int i = 0; i < N; i++) {
        somaB += B[i];
    }

    // Obter o vetor C (soma dos vetores A e B)
    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }

    // Obter o vetor D (subtração de B de A)
    for (int i = 0; i < N; i++) {
        D[i] = A[i] - B[i];
    }

    // Calcular o produto escalar de A por B
    int produtoEscalar = 0;
    for (int i = 0; i < N; i++) {
        produtoEscalar += A[i] * B[i];
    }

    // Imprimir os resultados
    cout << "Soma dos elementos de A: " << somaA << endl;
    cout << "Soma dos elementos de B: " << somaB << endl;

    cout << "Vetor C (A + B): ";
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    cout << "Vetor D (A - B): ";
    for (int i = 0; i < N; i++) {
        cout << D[i] << " ";
    }
    cout << endl;

    cout << "Produto escalar de A por B: " << produtoEscalar << endl;

    return 0;
}
