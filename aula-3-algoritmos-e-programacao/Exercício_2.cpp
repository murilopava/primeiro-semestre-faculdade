#include <iostream>
using namespace std;

int main(){
    double area, a, b, h;

    area = (8+12) * 6 / 2;

    cout << "area do trapezio e " << area << endl;

    cout << "---- Digite agora os valores do SEU trapezio ----" << endl;
    
    cout << "Comprimento da base menor: ";
    cin >> a;

    cout << "Comprimento da base maior: ";
    cin >> b;

    cout << "Altura do trapezio: ";
    cin >> h;

    area = (a+b) * h / 2;

    cout << "A area do seu trapezio e: " << area;

    return 0;
}