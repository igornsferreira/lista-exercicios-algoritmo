#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int pratoEscolhido, sobremesaEscolhida, bebidaEscolhida;
    int caloriasPrato, caloriasSobremesa, caloriasBebida;
    int caloriasTotal;
    int caloriasPratos[] = {180, 230, 250, 350};
    int caloriasSobremesas[] = {75, 110, 170, 200};
    int caloriasBebidas[] = {20, 70, 100, 65};

    cout << "Escolha o prato (1- Vegetariano, 2- Peixe, 3- Frango, 4- Carne): ";
    cin >> pratoEscolhido;

    cout << "Escolha a sobremesa (1- Abacaxi, 2- Sorvete Diet, 3- Mousse Diet, 4- Mousse Chocolate): ";
    cin >> sobremesaEscolhida;

    cout << "Escolha a bebida (1- Chá, 2- Suco de Laranja, 3- Suco de Melão, 4- Refrigerante Diet): ";
    cin >> bebidaEscolhida;

    caloriasPrato = caloriasPratos[pratoEscolhido - 1];
    caloriasSobremesa = caloriasSobremesas[sobremesaEscolhida - 1];
    caloriasBebida = caloriasBebidas[bebidaEscolhida - 1];

    caloriasTotal = caloriasPrato + caloriasSobremesa + caloriasBebida;

    cout << "Calorias da refeição: " << caloriasTotal << " calorias." << endl;

    return 0;
}
