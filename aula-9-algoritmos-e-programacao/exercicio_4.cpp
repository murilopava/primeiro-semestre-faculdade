#include <iostream>
using namespace std;

int main(){
    int quantNumeros, numeros, soma = 0;
    double media;

    cout << "Digite a quantidade de numeros para fazer a media: ";
    cin >> quantNumeros;

    for (int i = 1; i <= quantNumeros; i++){
        cout << "Digite o numero " << i << ": ";
        cin >> numeros;

        soma += numeros;
    }
    media = soma / double (quantNumeros);
    cout << "A media sera de: " << media;

    return 0;
}