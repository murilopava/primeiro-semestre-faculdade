#include <iostream>
using namespace std;

int main(){
    double paisA = 5000000, paisB = 7000000;

    int anos = 0;

    while (paisA <= paisB){

        paisA += paisA * 0.03;
        paisB += paisB * 0.02;

        anos ++;
    } 

    cout << "Sera necessario " << anos << " anos para que o pais A ultrapassasse o pais B";

    return 0;
}