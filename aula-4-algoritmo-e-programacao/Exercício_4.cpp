#include <iostream>
using namespace std;

int main(){
    const double valorIngresso = 25.50;
    double ingressoDesconto;
    char estudante, idoso;

    cout << "Voce e estudante? [s/n]: ";
    cin >> estudante;

    cout << "Voce e idoso? [s/n]: ";
    cin >> idoso;

    if (estudante == 's'){
        ingressoDesconto = valorIngresso * 0.5;
        cout << "Seu ingresso recebera 50% de desconto, ficando assim R$" << ingressoDesconto;
    } else if (idoso == 's'){
        ingressoDesconto = valorIngresso * 0.8;
        cout << "Seu ingresso recebera 20% de desconto, ficando assim R$" << ingressoDesconto;
    } else {
        cout << "Seu ingresso nao recebera desconto!";
    }

    return 0;
}