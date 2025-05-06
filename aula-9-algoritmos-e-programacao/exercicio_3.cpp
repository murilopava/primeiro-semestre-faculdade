#include <iostream>
using namespace std;

int main(){
    int numeroPessoas, adultos = 0, idade;

    cout << "Quantas pessoas serao registradas? ";
    cin >> numeroPessoas;

    for (int i = 1; i <= numeroPessoas; i++){
        cout << "Qual a idade da pessoa " << i << ": ";
        cin >> idade;

        if (idade >= 18){
            adultos += 1;
        }
    } 
    cout << "A quantidade de adultos e de: " << adultos;

    return 0;
}