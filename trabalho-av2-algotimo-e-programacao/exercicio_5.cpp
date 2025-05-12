#include <iostream>
using namespace std;

int main(){
    int a, b, soma = 0;

    cout << "Digite o inicio do intervalo: ";
    cin >> a;

    cout << "Digite o final do intervalo: ";
    cin >> b;

    for (int i = a; i <= b; i++){
        if (i == 2){
            soma += i;
        }else{
            for (int n = 2; n < i; n++){
            if (i % n == 0){
                n = i - 1;
            } else if(n == i - 1){
                soma += i;
            }
            }
        }
    } 
    cout << "A soma dos numeros primos e " << soma;

    return 0;
}