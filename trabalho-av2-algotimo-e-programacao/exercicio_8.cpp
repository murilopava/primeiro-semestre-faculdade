#include <iostream>
using namespace std;

int main(){

    cout << "---------------JOGO DO COPO----------------" << endl;
    cout << "| EMBARALHADOR ESCOLHA A POSICAO DA MOEDA |" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "   A) 1           B) 2              C) 3" << endl;

    int copoCorreto;

    cout << "Posicao da moeda: ";
    cin >> copoCorreto;

    if (copoCorreto > 3 or copoCorreto < 1){
        cout << "Escolha um copo valido";
        return 1;
    }

    int movimentos;

    cout << "Indique a quantidade de movimentos que quer realizar: ";
    cin >> movimentos;

    int escMovimentos;

    cout << "-=-ESCOLHA COMO DESEJA REALIZAR OS MOVIMENTOS-=-" << endl;
    for (int i = 1; i <= movimentos; i++){
        cout << "    1) Trocar a posicao entre os copos A e B" << endl;
        cout << "    2) Trocar a posicao entre os copos B e C" << endl;
        cout << "    3) Trocar a posicao entre os copos A e C" << endl << endl;

        cout << "Movimento que deseja realizar: ";
        cin >> escMovimentos;
        
        if (escMovimentos == 1){
            if (copoCorreto == 1){
                copoCorreto = 2;
            } else if(copoCorreto == 2){
                copoCorreto = 1;
            }
            
        } else if (escMovimentos == 2){
            if (copoCorreto == 2){
                copoCorreto = 3;
            } else if (copoCorreto == 3){
                copoCorreto = 2;
            }
            
        } else if (escMovimentos == 3){
            if (copoCorreto == 1){
                copoCorreto = 3;
            } else if (copoCorreto == 3){
                copoCorreto = 1;
            }
            
        } else {
            cout << "digite um movimento valido!" << endl;
            i--;
        }
        cout << endl;
    } 
    cout << "---------ADIVINHADOR---------" << endl;
    cout << "      QUAL SEU PALPITE?" << endl;
    cout << "  A) 1       B) 2       C) 3" << endl << endl;
    
    int escAdivinhador;

    cout << "Escolha em qual copo esta a moeda: ";
    cin >> escAdivinhador;

    if (escAdivinhador == copoCorreto){
        cout << "PARABENS! Voce acertou, VITORIA DO ADIVINHADOR!";
    } else{
        cout << "Voce ERROU! O copo correto era o " << copoCorreto << ", VITORIA DO EMBARALHADOR!"; 
    }

    return 0;
}