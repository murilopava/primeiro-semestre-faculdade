#include <iostream>
using namespace std;

int main(){
    int numero, menorNumero, quantNumero, defNumero;

    cout << "Digite a quantidade de numeros: ";
    cin >> quantNumero;

    for (int i = 1; i <= quantNumero; i++){
        cout << "Digite o numero " << i << ": ";
        cin >> numero;
        defNumero = numero;
        if (defNumero < menorNumero){
            menorNumero = numero;
        }    
    }
    cout << "O menor numero da serie e: " << menorNumero;

    return 0;
}