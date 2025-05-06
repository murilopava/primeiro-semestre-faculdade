#include <iostream>
using namespace std;

int main(){
    string nome, doce, nascimento;

    cout << "Qual o seu nome? ";
    cin >> nome;

    cout << "Qual seu doce preferido? ";
    cin >> doce;

    cout << "Qual seu local de nascimento? ";
    cin >> nascimento;

    cout << "----------------------" << endl;
    cout << "Seu nome e " << nome << endl;
    cout << "Seu doce preferido e " << doce << endl;
    cout << "Seu local de nascimento foi em " << nascimento;
    
    return 0;
}