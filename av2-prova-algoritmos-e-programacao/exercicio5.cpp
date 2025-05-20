#include <iostream>
using namespace std;

int main(){
    int n,salario,meses;
        
    while(n!=4){

        cout << "1)Novo salario" << endl;
        cout << "2)Ferias" << endl;
        cout << "3)Decimo terceiro" << endl;
        cout << "4)Sair" << endl;
        cin >> n;

        if(n == 1){
            cout << "Digite o salario: R$";
            cin >> salario;

            if(salario<350){
                salario+= salario *0.15;
                cout << "O novo salario e de R$" << salario << endl;
            }else if(salario >= 350 && salario <=600){
                salario+= salario *0.10;
                cout << "O novo salario e de R$" << salario << endl;
            }else{
                salario+= salario *0.05;
                cout << "O novo salario e de R$" << salario << endl;
            }
        }else if(n == 2){
            cout << "Digite o salario: R$";
            cin >> salario;

            salario += salario/3.0;
            cout << "O novo salario e de R$" << salario << endl;

        }else if(n == 3){
            cout << "Digite o salario: ";
            cin >> salario;

            cout << "Digite os meses: ";
            cin >> meses;

            if(meses > 12){
                cout << "Meses tem que ser no maximo 12!" << endl;
            }else{
                salario = (salario * meses) / 12.0;
                
                cout << "O decimo terceiro sera de " << salario << endl;
            }
        }
    }

    return 0;
}