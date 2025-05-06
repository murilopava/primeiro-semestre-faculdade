#include <iostream>
using namespace std;

int main(){

    int x, y;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    if(x > 0 and y > 0){

        cout << "(" << x <<  "," << y << ") pertence ao primeiro quadrante.";

    }else if(x < 0 and y > 0){
        
        cout << "(" << x <<  "," << y << ") pertence ao segundo quadrante.";

    }else if(x < 0 and y < 0){

        cout << "(" << x <<  "," << y << ") pertence ao terceiro quadrante.";

    }else if(x > 0 and y < 0){

        cout << "(" << x <<  "," << y << ") pertence ao quarto quadrante.";

    }else{

        cout << "(" << x <<  "," << y << ") nao pertence ao um quadrante especifico.";
    }

    return 0;

}