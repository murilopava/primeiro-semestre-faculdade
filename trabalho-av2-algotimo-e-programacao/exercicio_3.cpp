#include <iostream>
using namespace std;

int main(){
    double valor;
    int quantCedula;

    cout << "Indique o valor a ser decomposto: ";
    cin >> valor;

    cout << "O valor vai receber:" << endl;
    while (valor != 0){
        if (valor >= 100){
            quantCedula = int(valor / 100);
            valor -= quantCedula * 100;
            if (quantCedula == 1){
                cout << quantCedula << " cedula de 100 " << endl;
            } else{
                cout << quantCedula << " cedulas de 100 " << endl;
            }
        } else if (valor >= 50){
            quantCedula = int(valor / 50);
            valor -= quantCedula * 50;
            if (quantCedula == 1){
                cout << quantCedula << " cedula de 50 " << endl;
            } else{
                cout << quantCedula << " cedulas de 50 " << endl;
            }
        } else if (valor >= 20){
            quantCedula = int(valor / 20);
            valor -= quantCedula * 20;
            if (quantCedula == 1){
                cout << quantCedula << " cedula de 20 " << endl;
            } else{
                cout << quantCedula << " cedulas de 20 " << endl;
            }
        } else if (valor >= 10){
            quantCedula = int(valor / 10);
            valor -= quantCedula * 10;
            if (quantCedula == 1){
                cout << quantCedula << " cedula de 10 " << endl;
            } else{
                cout << quantCedula << " cedulas de 10 " << endl;
            }
        } else if (valor >= 5){
            quantCedula = int(valor / 5);
            valor -= quantCedula * 5;
            if (quantCedula == 1){
                cout << quantCedula << " cedula de 5 " << endl;
            } else{
                cout << quantCedula << " cedulas de 5 " << endl;
            }
        }
    }
}