#include <iostream>
using namespace std;

int main(){

    double v1;
    int p1;
    cout << "Digite o primeiro valor: ";
    cin >> v1;
    cout << "Digite o peso para o primeiro valor: ";
    cin >> p1;


    double v2;
    int p2;
    cout << "Digite o segundo valor: ";
    cin >> v2;
    cout << "Digite o peso para o segundo valor: ";
    cin >> p2;


    double v3;
    int p3;
    cout << "Digite o terceiro valor: ";
    cin >> v3;
    cout << "Digite o peso para o terceiro valor: ";
    cin >> p3;


    double v4;
    int p4;
    cout << "Digite o quarto valor: ";
    cin >> v4;
    cout << "Digite o peso para o quarto valor: ";
    cin >> p4;

    double mediaPonderada;

    mediaPonderada = ((v1 * p1) + (v2 * p2) + (v3 * p3) + (v4 * p4)) / (p1 + p2 + p3 + p4);
    cout << "A media ponderada sera de: " << mediaPonderada;

    return 0;

}