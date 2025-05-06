#include <iostream>
using namespace std;

int main(){
    int idade;

    cout << "digite a sua idade: ";
    cin >> idade;

    if (idade < 12){
        cout << "O usuario com esta idade e uma crianca!";
    } else {
        cout << "O usuario com esta idade nao e uma crianca!";
    }

    return 0;
}