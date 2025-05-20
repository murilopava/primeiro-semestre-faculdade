#include <iostream>
using namespace std;

int main(){
    double salarioAlan, salarioCharlie;
    int somaMes = 0;

    cout << "Digite o salario de Alan: R$";
    cin >> salarioAlan;

    cout << "Digite o salario de Charlie: R$";
    cin >> salarioCharlie;

    salarioAlan *= 0.50;
    salarioCharlie *= 0.80;

    while(salarioAlan < salarioCharlie){
        salarioAlan += salarioAlan * 0.05;
        salarioCharlie += salarioCharlie * 0.02;
        somaMes ++;
    }

    cout << "Sera necessario " << somaMes << " meses para Alan ultrapassar o salario de Charlie"; 
}