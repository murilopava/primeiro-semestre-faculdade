#include <iostream>
using namespace std;

int main(){
    double numero1, numero2;
    int escolha;

    cout << "Digite um valor: ";
    cin >> numero1;

    cout << "Digite outro valor: ";
    cin >> numero2;

    cout << "Escolha uma operação" << endl;
    cout << "-----Calculadora------" << endl;
    cout << "[1] Somar" << endl;
    cout << "[2] Subtrair" << endl;
    cout << "[3] Multiplicar" << endl;
    cout << "[4] Dividir" << endl;
    cout << "----------------------" << endl;
    cin >> escolha;


    if (escolha == 1){
        cout << "Somando " << numero1 << " por " << numero2 << " = " << numero1 + numero2;
    } else if (escolha == 2){
        cout << "Subtraindo " << numero1 << " por " << numero2 << " = " << numero1 - numero2;
    } else if (escolha == 3){
        cout << "Multiplicando " << numero1 << " por " << numero2 << " = " << numero1 * numero2;
    } else if (escolha == 4){
        cout << "Dividindo " << numero1 << " por " << numero2 << " = " << numero1 / numero2;
    }
    
    return 0;
}