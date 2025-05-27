#include <iostream>
using namespace std;

int main(){

    int m[4][4] = {
        {2,7,9,1},
        {10,16,13,18},
        {21,23,27,25},
        {31,35,38,30}
    };

    int k;

    cout << "Digite um numero inteiro para verificar se um dos valores da matriz e divisivel por ele: ";
    cin >> k;

    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
            if(m[l][c] % k == 0){
                cout << m[l][c] << " ";
            }
        }
    }

    return 0;
}