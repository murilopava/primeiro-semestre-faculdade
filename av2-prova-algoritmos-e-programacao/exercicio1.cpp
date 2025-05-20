#include <iostream>
using namespace std;

int main(){
    int n=0,cubo=0;

    while(cubo<4000){
        n+=7;
        if(n%2 == 0){
            cubo = n * n * n;
        }
    }

    cout << "O menor numer par divisel por 7 cujo o cubo e maior que 4000: " << n;

    return 0;

}