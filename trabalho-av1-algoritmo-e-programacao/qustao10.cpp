#include <iostream>
using namespace std;

int main(){
    
    double altura,largura,comprimento;

    cout << "Digite a altura do reservatorio em centimetros: ";
    cin >> altura;

    cout << "Digite a largura do reservatorio em centimetros: ";
    cin >> largura;

    cout << "Digite a comprimento do reservatorio em centimetros: ";
    cin >> comprimento;

    double capacidadeTotal = altura * largura * comprimento /1000;

    double consumoLitros;

    cout << "Digite o consumo em litros diarios do reservatorio: ";
    cin >> consumoLitros;

    cout << "A capacidade total do reservatorio e de " << capacidadeTotal << " litros" << endl;

    double autonomia = capacidadeTotal / consumoLitros;

    cout << "A autonomia do seu reservatorio em relacao ao seu gasto diario sera de "
    << autonomia << " dias" << endl;

    if(autonomia<2){
        cout << "O seu consumo esta ELEVADO";
    }else if (autonomia>=2 and autonomia<=7){
        cout << "O seu consumo esta MODERADO";
    }else{
        cout << "O seu consumo esta BAIXO";
    }
    
    return 0;

}