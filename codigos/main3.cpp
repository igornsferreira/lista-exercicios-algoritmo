#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int quantidadePequenas, quantidadeMedias, quantidadeGrandes;
    float valorPequena = 10.0, valorMedia = 12.0, valorGrande = 15.0;
    float valorTotal;

    cout << "Informe a quantidade de camisetas pequenas vendidas: ";
    cin >> quantidadePequenas;

    cout << "Informe a quantidade de camisetas médias vendidas: ";
    cin >> quantidadeMedias;

    cout << "Informe a quantidade de camisetas grandes vendidas: ";
    cin >> quantidadeGrandes;

    valorTotal = (quantidadePequenas * valorPequena) + (quantidadeMedias * valorMedia) + (quantidadeGrandes * valorGrande);

    cout << "Valor total arrecadado: R$ " << valorTotal << endl;

    return 0;
}
