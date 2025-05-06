#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double G = 6.6743 * pow(10,-11);

    double m1;
    cout << "Digite a massa do primeiro objeto: ";
    cin >> m1;

    double m2;
    cout << "Digite a massa do segundo objeto: ";
    cin >> m2;

    double distancia;
    cout << "Digite a distancia entre os objetos: ";
    cin >> distancia;

    double forcaGravitacional;
    forcaGravitacional = (G * (m1*m2)) / (distancia*distancia);

    cout << "A forca gravitacional dos objetos e de: " << forcaGravitacional << endl;

    return 0;

}