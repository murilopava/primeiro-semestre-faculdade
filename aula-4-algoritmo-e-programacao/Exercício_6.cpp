#include <iostream>
using namespace std;

int main(){
    int numero;


    cout << "Que dia da semana e hoje: ";
    cin >> numero;

    if (numero == 1) {
        cout << "Hoje e domingo!";
    } else if (numero == 2){
        cout << "Hoje e segunda!";
    } else if (numero == 3){
        cout << "Hoje e terça!";
    } else if (numero == 4){
        cout << "Hoje e quarta!";
    } else if (numero == 5){
        cout << "Hoje e quinta!";
    } else if (numero == 6){
        cout << "Hoje e sexta!";
    } else if (numero == 7){
        cout << "Hoje e sabado!";
    } else {
        cout << "Digite um valor de dia valido!";
    }

    return 0;
}