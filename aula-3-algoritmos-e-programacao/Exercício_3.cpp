#include <iostream> 
using namespace std;

int main(){
    double a, b;

    cout << "Digite um valor para A: ";
    cin >> a;

    cout << "Digite um valor para B: ";
    cin >> b;

    cout << "---------Calculadora----------" << endl;
    cout << "| (" << a << "+" << b << ") = " << a + b << endl;
    cout << "| (" << a << "-" << b << ") = " << a - b << endl;
    cout << "| (" << a << "*" << b << ") = " << a * b << endl;
    cout << "| (" << a << "/" << b << ") = " << a / b << endl;
    cout << "------------------------------";

    return 0;
}