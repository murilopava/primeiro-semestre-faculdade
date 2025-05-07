#include <iostream>
using namespace std;

int main(){
    int quantPessoas, maiorSalario = 0;
    double salario;

    cout << "Quantidade de pessoas que serao entrevistadas: ";
    cin >> quantPessoas;

    for (int i = 1; i <= quantPessoas; i++){
        cout << "Qual o salario da pessoa " << i << ": R$";
        cin >> salario;

        if (maiorSalario == 0){
            maiorSalario = salario;
        } else if (salario > maiorSalario){
            maiorSalario = salario;
        }
    }
    
    cout << "O maior salario dentre os entrevistados e de R$" << maiorSalario;
    
    return 0;
}