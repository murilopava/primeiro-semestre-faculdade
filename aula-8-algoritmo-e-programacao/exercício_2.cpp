#include <iostream>
using namespace std;

int main(){

    double quantNumeros;

    cout << "Quantos voce quer para calcular a media: ";
    cin >> quantNumeros;

    double valores, somaValores, contador = 1;
    while (contador <= quantNumeros){
        cout << "Digite o valor " << contador << ": ";
        cin >> valores;

        somaValores += valores;
        contador++;
    }
    double media;
    media = somaValores / quantNumeros;

    cout << "A media dos valores e: " << media; 

    return 0;
}