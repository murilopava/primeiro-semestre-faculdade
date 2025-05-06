#include <iostream>
using namespace std;

int main(){

    double peso1;
    cout << "Digite o peso da crianca 1: ";
    cin >> peso1;

    double peso2;
    cout << "Digite o peso da crianca 2: ";
    cin >> peso2;

    double comprimento1;
    cout << "Digite o comprimento lado direito da gangorra: ";
    cin >> comprimento1;

    double comprimento2;
    cout << "Digite o comprimento do lado esquerdo da gangorra: ";
    cin >> comprimento2;

    if(peso1 * comprimento1 == peso2 * comprimento2){
        cout << "A gangorra esta equilibrada!";
    }else{
        cout << "A gangorra nao esta em equilibrio!";
    }
    
    return 0;
    
}
