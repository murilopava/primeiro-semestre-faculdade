#include <iostream>
using namespace std;

int main(){

    int numero;

    cout << "Digite um valor para fatorial: ";
    cin >> numero;

    int fatorial = numero;
    int n = numero - 1;
    while (n != 0){
        fatorial = fatorial * n;
        n -= 1;
    }
    cout << "O fatorial de " << numero << "! e " << fatorial;

    return 0;
}