#include <iostream>
using namespace std;

// Erro 15 - !Output fornecido do usuario invalido para o contexto equacional!

int main(){
   
    int a, b, c;

    cout << "Informe um valor para A: ";
    cin >> a;

    if(a == 0){

        cout << " 'A' deve ser um numero diferente de 0";

        return 15;
    }
    cout << "Informe um valor para B: ";
    cin >> b;

    cout << "Informe um valor para C: ";
    cin >> c;

    int delta = (b*b) - (4*a*c);

    if(delta>0){
        cout << "> Duas raizes reais e distintas.";
    }else if(delta == 0){
        cout << "> Uma raiz real";
        
    }else{
        cout << "> Raizes complexas";
    }

    return 0;

}