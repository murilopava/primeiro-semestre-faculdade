#include <iostream>
using namespace std;

int main(){
    int n, k;

    cout << "Digite um valor inteiro para N: ";
    cin >> n;

    cout << "Digite outro valor inteiro para K: ";
    cin >> k;

    if (n % k == 0){
        cout << "'N' e divisivel por K!";
    } else {
        cout << "'N' nao e divisivel por K! ";
    }

    return 0;
}