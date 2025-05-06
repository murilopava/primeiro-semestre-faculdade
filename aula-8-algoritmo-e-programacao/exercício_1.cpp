#include <iostream>
using namespace std;

int main(){

    int x,y;
    
    cout << "Qual o limite inferior do intervalo? ";
    cin >> x;

    cout << "Qual o limite superior do intervalo? ";
    cin >> y;

    int soma = 0;
    do{
        if (x % 2 == 0){
            soma = soma + x;
        }
        x += 1;
    } while (x <= y);
    cout << "a soma e " << soma;

    return 0;
}