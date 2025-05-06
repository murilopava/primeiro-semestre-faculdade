#include <iostream>
using namespace std;

int main(){

    double posicaoInicial;
    double velocidadeInicial;
    double tempo;
    double aceleracao;

    cout << "Digite a posicao inicial: ";
    cin >> posicaoInicial;

    cout << "Digite a velocidade inicial: ";
    cin >> velocidadeInicial;

    cout << "Digite o tempo: ";
    cin >> tempo;
    
    cout << "Digite a aceleracao: ";
    cin >> aceleracao;


    double posicaoDoObjeto;
    posicaoDoObjeto = posicaoInicial + (velocidadeInicial * tempo) + ((aceleracao*tempo*tempo) / 2);
    
    cout << "A posicao do objeto e " << posicaoDoObjeto;

    return 0; 


}
