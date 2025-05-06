#include <iostream>
using namespace std;

int main(){
    
    cout << "=====================================" << endl;
    cout << "        TIPOS DE TRIANGULOS" << endl;
    cout << "=====================================" <<endl;

    double lado1;
    double lado2;
    double lado3;

    cout << "Digite um valor para o primeiro lado: ";
    cin >> lado1;

    cout << "Digite um valor para o segundo lado: ";
    cin >> lado2;

    cout << "Digite um valor para o terceiro lado: ";
    cin >> lado3;

    if(lado1==lado2 and lado1==lado3 and lado3==lado2){

        cout << "========TRIANGULO EQUILATERO========" << endl <<
        "  > Todos os lados sao iguais";

    }else if(lado1==lado2 or lado1==lado3 or lado2==lado3){

        cout << "========TRIANGULO ISOSCELES=========" << endl <<
        "  > Dois lados sao iguais";
    }else{
        cout << "========TRIANGULO ESCALENO==========" << endl <<
        "  > Todos lados sao diferentes";
    }

    return 0;
    
    }