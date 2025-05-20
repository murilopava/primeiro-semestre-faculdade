#include <iostream>
using namespace std;

int main(){
    int n;
    int soma = 0;

    cout << "Digite um valor: ";
    cin >> n;

    for(int i = 3; i <= n; i++){
            soma = (i - 1) * (i - 2) * i;
            if(soma == n){
                cout << "O numero e triangular!";
                return 1;
            }  
    }

    if (soma != n){
        cout << "O numero NAO e triangular!";
    }

    return 0;
}