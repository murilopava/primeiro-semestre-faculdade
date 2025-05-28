#include <iostream>
using namespace std;

int main(){
    int m1[4][4] = {
        {2,7,9,1},
        {10,16,13,18},
        {21,23,27,25},
        {31,35,38,30}
    };

    int m2[4][4] = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };

    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
            m2[l][c] = m1[l][c];
        }
    } 

    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
            cout << m2[l][c] << " ";
        }
        cout << endl;
    }

    return 0;
}