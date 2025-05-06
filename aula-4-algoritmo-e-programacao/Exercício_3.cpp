#include <iostream>
using namespace std;

int main(){
    const double corridaDiurna = 3.4;
    const double corridaNoturna = 4.2;
    double corrida;

    double km;
    char resposta;

    cout << "Quantos quilometros rodados? ";
    cin >> km;

    cout << "Foi uma corrida noturna? [s/n]: ";
    cin >> resposta;

    if (resposta == 's'){
        corrida = corridaNoturna * km;
        cout << "A corrida deu R$" << corrida;
    } else {
        corrida = corridaDiurna * km;
        cout << "A corrida deu R$" << corrida;
    }

    return 0;
}