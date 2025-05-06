#include <iostream>
using namespace std;

int main(){
    double volume, raio;

    cout << "Raio da esfera: ";
    cin >> raio;

    volume = 4 * 3.14 * (raio * raio * raio) / 3;

    cout << "O volume da esfera sera de: " << volume;

    return 0;
}