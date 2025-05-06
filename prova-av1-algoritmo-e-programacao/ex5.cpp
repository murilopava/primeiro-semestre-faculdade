#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;
    
    int tentativa1; 
    cout << "Digite um numero entre 1 a 100: ";
    cin >> tentativa1;

    if (tentativa1 > numeroSecreto){
        cout << "O numero secreto e menor" << endl;
    } else if (tentativa1 < numeroSecreto){
        cout << "O numero secreto e maior" << endl;
    } else {
        cout << "Parabens voce venceu!";
        return 1;
    }

    int tentativa2; 
    cout << "Digite um numero entre 1 a 100: ";
    cin >> tentativa2;

    if (tentativa2 > numeroSecreto){
        cout << "O numero secreto e menor" << endl;
    } else if (tentativa2 < numeroSecreto){
        cout << "O numero secreto e maior" << endl;
    } else {
        cout << "Parabens voce venceu!";
        return 2;
    }

    int tentativa3; 
    cout << "Digite um numero entre 1 a 100: ";
    cin >> tentativa3;

    if (tentativa3 > numeroSecreto){
        cout << "O numero secreto e menor" << endl;
    } else if (tentativa3 < numeroSecreto){
        cout << "O numero secreto e maior" << endl;
    } else {
        cout << "Parabens voce venceu!";
        return 3;
    }

    cout << "Voce nao acertou... o numero era: " << numeroSecreto;

    return 0;

}