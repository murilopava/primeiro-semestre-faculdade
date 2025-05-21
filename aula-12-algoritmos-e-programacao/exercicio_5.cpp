#include <iostream>
using namespace std;

int main(){
    int array[5] = {4,2,3,4,2};
    int x = 4, posicao = 0;

    for(int i = 0; i < 5; i++){
        if(x == array[i]){
            posicao = i;
        }
    }

    cout << "Ultima posicao do numero x dentro do array foi na posicao " << posicao;

    return 0;
}