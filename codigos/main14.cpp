#include <iostream>
#include <cmath>

using namespace std;

double calcularVolumeEsfera(double raio) {
    double volume = (4.0/3.0) * M_PI * pow(raio, 3);
    return volume;
}

int main() {
    double raio;
    
    cout << "Digite o raio da esfera: ";
    cin >> raio;
    
    double volume = calcularVolumeEsfera(raio);
    
    cout << "O volume da esfera é: " << volume << endl;
    
    return 0;
}
