#include <iostream>
using namespace std;

int main(){
    double celsius, fahrenheit;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    fahrenheit = celsius * 1.8 + 32;

    cout << "A temperatura em Fahrenheit e: " << fahrenheit;

    return 0;
}