#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int qtdPaes, qtdBroas;
    float valor_pao = 0.12, valor_broa = 1.50;
    float total, poupanca;

    cout << "Informe a quantidade de pães vendidos: ";
    cin >> qtdPaes;

    cout << "Informe a quantidade de broas vendidas: ";
    cin >> qtdBroas;

    total = (qtdPaes * valor_pao) + (qtdBroas * valor_broa);
    poupanca = total * 0.1;

    cout << "Total arrecadado: R$ " << total << endl;
    cout << "Valor a ser guardado na poupança: R$ " << poupanca << endl;

    return 0;
}
