#include <iostream>
using namespace std;

// - O convidado A come 300g
// - O convidado B come 1500g
// - O convidado C come 600g

int main(){
    
    char convidadoA;
    char convidadoB;
    char convidadoC;

    int somaDasPorcoes = 0;

    cout << "VERIFICACAO DA LISTA DE PRESENCA" << endl;

    cout << "> O convidao A esta presente: (S/N)";
    cin >> convidadoA;

    cout << "> O convidao B esta presente: (S/N)";
    cin >> convidadoB;

    cout << "> O convidao C esta presente: (S/N)";
    cin >> convidadoC;


    if(convidadoA == 'S'){
        somaDasPorcoes += 300;
    }
    if(convidadoB == 'S'){
        somaDasPorcoes += 1500;
      
    }
    if(convidadoC == 'S'){
        somaDasPorcoes += 600;
    }

    cout << "A quantidade necessaria de comida e de: " << somaDasPorcoes << "g";

    return 0;


}