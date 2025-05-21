#include <iostream>
using namespace std;

int main(){
    int n[10] = {10,2,7,21,4,18,35,12,11,12};
    int maior = 0;
    
    for(int i = 0; i<10; i++){
        if (maior < n[i]){
            maior = n[i];
        }
    }
    cout << maior;

    return 0;
}