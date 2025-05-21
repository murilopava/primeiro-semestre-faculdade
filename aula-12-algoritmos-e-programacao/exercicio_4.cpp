#include <iostream>
using namespace std;

int main(){
    int inteiros[5] = {4,1,7,2,8};
    int copia[5];

    for(int i = 0; i < 5; i++){
        copia[i] = inteiros[i];
        cout << copia[i];
    }
}