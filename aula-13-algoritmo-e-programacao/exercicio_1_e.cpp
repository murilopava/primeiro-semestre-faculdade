#include <iostream>
using namespace std;

int main(){
    int m[4][4] = {
        {2,7,9,1},
        {10,16,13,18},
        {21,23,27,25},
        {31,35,38,30}
    };

    cout << "Diagonal principal: ";
    for(int n = 0; n < 4; n++){
        cout << m[n][n] << " ";
    }

    return 0;
}