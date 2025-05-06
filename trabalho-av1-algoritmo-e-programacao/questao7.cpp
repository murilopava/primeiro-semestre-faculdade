#include <iostream>
using namespace std;

int main(){

    int angulo1;
    int angulo2;
    int angulo3;

    cout << "=====================================" << endl;
    cout << "        TIPOS DE TRIANGULOS" << endl;
    cout << "=====================================" <<endl;


    cout << "Digite o valor do primeiro angulo do triangulo: ";
    cin >> angulo1;

    cout << "Digite o valor do segundo angulo do triangulo: ";
    cin >> angulo2;

    cout << "Digite o valor do terceiro angulo do triangulo: ";
    cin >> angulo3;

    int soma = angulo1 + angulo2 + angulo3;

    if(soma==180 and angulo1>0 and angulo2>0 and angulo3>0){
        if (angulo1< 90 and angulo2 < 90 and angulo3 <90){
            cout << "===========TRIANGULO ACUTANGULO=========="<< endl <<
                    "> Todos os angulos sao menores que 90";

        }else if(angulo1 == 90 or angulo2 == 90 or angulo3 == 90){
                cout << "===========TRIANGULO RETANGULO==========" << endl <<
                        "> Tem um angulo reto, ou seja, igual a 90 "<< endl <<
                        "> Os outros dois angulos sao menores que 90" << endl;

        }else if(angulo1 > 90 or angulo2 > 90 or angulo3 > 90){
                cout << "===========TRIANGULO OBTUSANGULO==========" << endl <<
                        "> Tem um Angulo obtuso, ou seja, maior que 90 "<< endl <<
                        "> Os outros dois angulos sao menores que 90" << endl;
            }
    }else{
        cout << "TRIANGULO INVALIDO!";
    }
        
    return 0;
}