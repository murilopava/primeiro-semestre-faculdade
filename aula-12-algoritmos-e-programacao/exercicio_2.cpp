#include <iostream>
using namespace std;

int main(){
    int array[5] = {3,2,5,6,5};
    int x = 5;
    int y = 9;

    for(int i = 0; i < 5; i++){
        if(array[i] == x){
            array[i] = y;
        }
        
        cout << array[i];
    }

    return 0;
}