#include <iostream>
using namespace std;

int main(){
    double valor;
    int quantCedulamoeda;

    cout << "Indique o valor a ser decomposto: ";
    cin >> valor;

    cout << "O valor vai receber:" << endl;
    while (valor != 0.01){
        if (valor >= 100){
            quantCedulamoeda = int(valor / 100);
            valor -= quantCedulamoeda * 100;

            if (quantCedulamoeda == 1){
                cout << quantCedulamoeda << " cedula de 100 " << endl;
            } else{
                cout << quantCedulamoeda << " cedulas de 100 " << endl;
            }
        } else if (valor >= 50){
            quantCedulamoeda = int(valor / 50);
            valor -= quantCedulamoeda * 50;

            cout << quantCedulamoeda << " cedula de 50 " << endl;         
        } else if (valor >= 20){
            quantCedulamoeda = int(valor / 20);
            valor -= quantCedulamoeda * 20;

            if (quantCedulamoeda == 1){
                cout << quantCedulamoeda << " cedula de 20 " << endl;
            } else{
                cout << quantCedulamoeda << " cedulas de 20 " << endl;
            }
        } else if (valor >= 10){
            quantCedulamoeda = int(valor / 10);
            valor -= quantCedulamoeda * 10;

            cout << quantCedulamoeda << " cedula de 10 " << endl;
        } else if (valor >= 5){
            quantCedulamoeda = int(valor / 5);
            valor -= quantCedulamoeda * 5;

            if (quantCedulamoeda == 1){
                cout << quantCedulamoeda << " cedula de 5 " << endl;
            } else{
                cout << quantCedulamoeda << " cedulas de 5 " << endl;
            }
        } else if (valor >= 1){
            quantCedulamoeda = int(valor / 1);
            valor -= quantCedulamoeda;

            if (quantCedulamoeda == 1){
                cout << quantCedulamoeda << " moeda de 1 " << endl;
            } else{
                cout << quantCedulamoeda << " moedas de 1 " << endl;
            }
        } else if (valor >= 0.50){
            quantCedulamoeda = int(valor / 0.50);
            valor -= quantCedulamoeda * 0.50;

            cout << quantCedulamoeda << " moeda de 0.50 " << endl;
        } else if (valor >= 0.25){
            quantCedulamoeda = int(valor / 0.25);
            valor -= quantCedulamoeda * 0.25;

            cout << quantCedulamoeda << " moeda de 0.25 " << endl;
        } else if (valor >= 0.10){
            quantCedulamoeda = int(valor / 0.10);
            valor -= quantCedulamoeda * 0.10;

            if (quantCedulamoeda == 1){
                cout << quantCedulamoeda << " moeda de 0.10 " << endl;
            } else{
                cout << quantCedulamoeda << " moedas de 0.10 " << endl;
            } 
        } else if (valor >= 0.05){
            quantCedulamoeda = int(valor / 0.05);
            valor -= quantCedulamoeda * 0.05;
            
            cout << quantCedulamoeda << " moeda de 0.05 " << endl;
        } else if (valor >= 0.01){
            quantCedulamoeda = int(valor * 100 + 0.01);
            valor -= quantCedulamoeda * 0.01;

            if (quantCedulamoeda == 1){
                cout << quantCedulamoeda << " moeda de 0.01 " << endl;
            } else{
                cout << quantCedulamoeda << " moedas de 0.01 " << endl;
            }
        } else{
            return 1;
        }
    }

    return 0;
}