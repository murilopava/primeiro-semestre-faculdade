#include <iostream>
using namespace std;

int main(){
    int numero, divisao = 10, soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    while (numero != 0){
        soma = soma + (numero % 10);
        numero /= 10;
    }
    cout << "A soma entre os numeros e " << soma;

    return 0;
}