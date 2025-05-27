#include <iostream>
#include <climits>

using namespace std;

int main(){

    int maior = INT_MIN;
     int a[3][4] = {
        {0,5,6,8},
        {4,5,6,7},
        {-11,-8,9,10}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if (a[i][j] > maior){
                maior = a[i][j];
            }
        }
    }
    
    cout << maior << endl;

    return 0;
}