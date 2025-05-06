#include <iostream>
using namespace std;

int main(){
    int base, potencia, numero;
    
    cout << "Numero base: ";
    cin >> base;
    numero = base;

    cout << "Numero da potencia: ";
    cin >> potencia;

    for (int i = 1; i <= potencia - 1; i++){
        base = numero * base;
         
    }
    cout << "O resultado final e: " << base;
}