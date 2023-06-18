#include <iostream>

using namespace std;

bool primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int numero;
    
    cout << "Digite um número inteiro e positivo: ";
    cin >> numero;
    
    bool resultado = primo(numero);
    
    if (resultado) {
        cout << "O número é primo." << endl;
    } else {
        cout << "O número não é primo." << endl;
    }
    
    return 0;
}
