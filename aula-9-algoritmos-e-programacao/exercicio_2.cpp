#include <iostream>
using namespace std;

int main(){
    int x, y;

    cout << "Digite o valor para o intervalo anterior: ";
    cin >> x;

    cout << "Digite o valor para o intervalo superior: ";
    cin >> y;

    for ( int i = x; i <= y; i++){
        if (i % 2 == 1){
            cout << i << endl;
        }
    }

    return 0;
}