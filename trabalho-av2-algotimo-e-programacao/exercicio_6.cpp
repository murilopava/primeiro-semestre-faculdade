#include <iostream>
using namespace std;

int main(){
    int numero, somaDivisao = 0;

    cout << "Digite um numero inteiro para saber se ele e perfeito: ";
    cin >> numero;

    for (int i = 1; i < numero; i++){
        if (numero % i == 0){
            somaDivisao += i;
        }
    } 
    if (somaDivisao == numero){
        cout << "E um numero perfeito!";
    } else{
        cout << "Nao e um numero perfeito!";
    }

    return 0;
}