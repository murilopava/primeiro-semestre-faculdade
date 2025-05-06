#include <iostream>
using namespace std;

int main(){
    
    int n1;
    int n2;
    int n3;

    cout << "Digite um valor para numero 1: ";
    cin >> n1;

    cout << "Digite um valor para numero 2: ";
    cin >> n2;

    cout << "Digite um valor para numero 3: ";
    cin >> n3;

    int menorValor;

    if(n1<=n2 and n1<=n3){
       menorValor = n1;
    }else if(n2<=n1 and n2<=n3){
        menorValor = n2;
    }else if (n3<=n1 and n3<=n2){
        menorValor = n3;
    }

    int maiorValor;

    if(n1>=n2 and n1>=n3){
        maiorValor = n1;
    }else if(n2>=n1 and n2>=n3){
        maiorValor = n2;
    }else if(n3>=n1 and n3>=n2){
        maiorValor = n3;
    }

    int valorDoMeio;
    valorDoMeio = (n1 + n2 + n3)-(maiorValor+menorValor);

    cout << "Os valores digitados em ordem crescente: " << menorValor << "," << valorDoMeio << "," << maiorValor;

    return 0;
    
}