//*Eucalipto tem 1,10m e cresce 3 centímetros por ano enquanto que a Palmeira tem 1,50m e cresce 2 centímetros por ano.

#include <iostream>
using namespace std;

int main(){
    double eucalipto = 1.10, palmeira = 1.50;

    double anos;
    while (eucalipto < palmeira)
    {
        eucalipto += 0.03;
        palmeira += 0.02;
        anos += 1;
    }
    cout << "Demorara " << anos << " anos para que o pe de Eucalipto seja maior que a Palmeira!";

    return 0;
}