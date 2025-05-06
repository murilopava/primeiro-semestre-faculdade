#include <iostream>
using namespace std;

int main(){
    double nota1, nota2, nota3, nota4, media;

    cout << "Primeira nota do aluno: ";
    cin >> nota1;

    cout << "Segunda nota do aluno: ";
    cin >> nota2;

    cout << "Terceira nota do aluno: ";
    cin >> nota3;

    cout << "Quarta nota do aluno: ";
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "A media do aluno e: " << media;

    return 0;
}