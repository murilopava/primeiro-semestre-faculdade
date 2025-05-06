#include <iostream>
using namespace std;

int main(){
    double a, b, c, d;

    cout << "Digite o valor do lado esquerdo da forma: ";
    cin >> a;

    cout << "Digite o valor do lado de baixo da forma: ";
    cin >> b;

    cout << "Digite o valor do lado direito da forma: ";
    cin >> c;

    cout << "Digite o valor do lado de cima da forma: ";
    cin >> d;

    if (a == b and a == c and a == d){
        cout << "Esta forma e um quadrado";
    } else if (a == c and b == d){
        cout << "Esta forma e um retangulo";
    } else {
        cout << "Esta forma nao e um quadrado nem um retangulo";
    }

    return 0;
}