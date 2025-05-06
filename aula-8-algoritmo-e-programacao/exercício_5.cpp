#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;


    cout << "Voce tem 10 chances para acertar o numero secreto" << endl;

    int escolha;
    int n = 1;
    while (n <= 10)
    {
        cout << "Escolha seu numero: ";
        cin >> escolha;

        if (escolha > numeroSecreto){
            cout << "Seu numero esta acima do numero secreto!" << endl;
        } else if (escolha < numeroSecreto){
            cout << "Seu numero esta abaixo do numero secreto!" << endl;
        } else {
            cout << "Parabens voce ganhou!";
            return 1;
        }
        n++;
    }
    if (escolha != numeroSecreto){
        cout << "Infelizmente voce nao conseguiu acertar... o numero era " << numeroSecreto;
    }

    return 0;
}