#include <iostream>
#include <climits>
using namespace std;

int main(){
    int m[5][5] = {
        {11,4,14,2,5},
        {12,8,41,12,20},
        {32,35,60,54,30},
        {41,53,17,35,22},
        {55,2,33,52,11}
    };
    
    int maior = INT_MIN;

    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            if(m[l][c] > maior){
                maior = m[l][c];
            }
        }
    }

    cout << "Maior numero da matriz: " << maior;

    return 0;
}