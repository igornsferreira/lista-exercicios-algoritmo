#include <iostream>

using namespace std;

bool perfeito(int numero) {
    int somaDivisores = 0;
    
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }
    
    return (somaDivisores == numero);
}

int main() {
    int numero;
    
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    bool resultado = perfeito(numero);
    
    if (resultado) {
        cout << "O número é perfeito." << endl;
    } else {
        cout << "O número não é perfeito." << endl;
    }
    
    return 0;
}
