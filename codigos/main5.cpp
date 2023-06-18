#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string destino;
    char opcaoRetorno;
    float precoPassagem;

    cout << "Informe o destino da viagem (Norte, Nordeste, Centro-Oeste ou Sul): ";
    cin >> destino;

    cout << "A viagem inclui retorno? (S para Sim / N para Não): ";
    cin >> opcaoRetorno;

    if (destino == "Norte") {
        if (opcaoRetorno == 'S') {
            precoPassagem = 900.0;
        } else {
            precoPassagem = 500.0;
        }
    } else if (destino == "Nordeste") {
        if (opcaoRetorno == 'S') {
            precoPassagem = 650.0;
        } else {
            precoPassagem = 350.0;
        }
    } else if (destino == "Centro-Oeste") {
        if (opcaoRetorno == 'S') {
            precoPassagem = 600.0;
        } else {
            precoPassagem = 350.0;
        }
    } else if (destino == "Sul") {
        if (opcaoRetorno == 'S') {
            precoPassagem = 550.0;
        } else {
            precoPassagem = 300.0;
        }
    } else {
        cout << "Destino inválido!" << endl;
        return 0;
    }

    cout << "O preço da passagem é: R$ " << precoPassagem << endl;

    return 0;
}
