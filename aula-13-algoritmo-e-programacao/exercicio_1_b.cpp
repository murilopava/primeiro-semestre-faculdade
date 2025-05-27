#include <iostream>
using namespace std;

int main(){

    int soma;
    int m[4][4] = {
        {2,7,9,1},
        {10,16,13,18},
        {21,23,27,25},
        {31,35,38,30}
    };

    for(int l = 0; l < 4; l++){
        soma = 0;
        for(int c = 0; c < 4; c++){
            soma += m[l][c];
        }
        cout << "Soma da linha " << l << ": " << soma << endl;    
    }

}