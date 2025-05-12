#include <iostream>
using namespace std;

int main(){
    int t1 = 1, t2 = 1, soma = 1, quantTermos;

    cout << "Quantos termos do Fibonacci ira mostrar: ";
    cin >> quantTermos;

    for (int i = 1; i <= quantTermos; i++){
        if (i == 1){
            cout << t1 << ", ";
        } else if (i == 2){
            soma = t1 + t2;
            cout << t1 << ", ";
        } else if (i == quantTermos){
            cout << soma;
        } else{
            cout << soma << ", ";
            soma = t1 + t2;
        }
        
        t1 = t2;
        t2 = soma;
    }
    
    return 0;
}