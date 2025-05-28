#include <iostream>
using namespace std;

int main(){
    int m[3][4] = {
        {2,7,9,1},
        {10,16,13,18},
        {21,23,27,25},
    };

    int soma = 0;
    for(int c = 0; c < 4; c++){
        soma = 0;
        for(int l = 0; l < 3; l++){
            soma += m[l][c];
        }
        cout << "Soma da coluna " << c << ": " << soma << endl;
    }
    
    return 0;
}