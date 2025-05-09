#include <iostream>
using namespace std;

int main(){
    int a, b, soma = 0;

    cout << "Digite o inicio do intervalo: ";
    cin >> a;

    cout << "Digite o final do intervalo: ";
    cin >> b;

    for (int i = a; i <= b; i++){
        if (i < 10){
            if (i != 1 and i != 4 and i != 6 and i != 8 and i != 9){
                soma += i;
            } else{
                cout << i << " nao e primo" << endl;
            }
        } else if (i % 2 == 0 or i % 3 == 0 or i % 5 == 0 or i % 7 == 0){
            cout << i << " nao e primo" << endl;
        } else {
            soma += i;
        }
    } 
    cout << "A soma de todos os primos e " << soma;

    return 0;
}