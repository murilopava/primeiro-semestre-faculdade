#include <iostream>
using namespace std;

int main(){
    int n, divisao = 2;
    double soma = 0;

    cout << "Digite a quantidade de termos: ";
    cin >> n;

    for(int i = 1; i <= n;i++){
        soma += 1.0/divisao;
        divisao += 2;
    }

    cout << soma;

    return 0;
}