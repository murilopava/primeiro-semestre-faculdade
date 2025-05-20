#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Digite um valor: ";
    cin >> n;

    cout << "C" << "(" << n << ")" << " = ";

    if(n <= 1){
        cout << n;  
    }else {
        cout << n << ", ";  
    }

    while(n > 1){
        if(n % 2 == 0){
            n *= 0.5;
            if(n == 1){
                cout << n;
            }else{
                cout << n << ", ";
            }
        } else{
            n = (n * 3) + 1;
            cout << n << ", ";
        }
    }
}