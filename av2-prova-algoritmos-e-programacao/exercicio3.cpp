#include <iostream>
using namespace std;

int main(){

    int usuarios,A=0,B=0,C=0,nulo=0,branco=0,voto;
    string primeiro,segundo,terceiro;
    
    cout << "Quantas pessoas vao votar? ";
    cin >> usuarios;

    for(int i = 1; i <= usuarios; i++){

        cout << "    1) Canditado A" << endl;

        cout << "    2) Canditado B" << endl;

        cout << "    3) Canditado C" << endl;

        cout << "    4) Voto nulo" << endl;

        cout << "    5) Voto branco" << endl << endl;

        cout << "Escolha seu voto: ";
        cin >> voto;

        if(voto < 1 or voto > 5){
            cout << "Digite um valor valido!";
            i-=1;
        }else if(voto == 1){
            A++;

        }else if(voto == 2){
            B++;

        }else if(voto == 3){
            C++; //easter egg

        }else if(voto == 4){
            nulo++;

        }else{
            branco++;

        }
    }   

    if(A>B and A>C){
        primeiro = "A";

    }if (B>A and B>C){
        primeiro = "B";

    }if (C>A and C>B){
        primeiro = "C";

    }if(A <= C and A >= B or A >= C and A <= B){
        segundo = "A";

    }if(B <= C and B >= A or B >= C and B <= A){
        segundo = "B";

    }if(C <= A and C >= B or C >= A and C <= B){
        segundo = "C";

    }if (A < B and A < C){
        terceiro = "A";

    }if (B < A and B < C){
        terceiro = "B";

    }if (C < B and C < A){
        terceiro = "C";
    }


    cout << "       Primeiro lugar - Canditado ";
    if(primeiro == "A"){
        cout << "A" << endl;
    } else if(primeiro == "B"){
        cout << "B" << endl;
    } else if(primeiro == "C"){
        cout << "C" << endl;
    }

    cout << "       Segundo  lugar - Canditado " ;
    if(segundo == "A"){
        cout << "A" << endl;
    } else if(segundo == "B"){
        cout << "B" << endl;
    } else if(segundo == "C"){
        cout << "C" << endl;
    }

    cout << "       Terceiro lugar - Canditado " << terceiro << endl;
    if(terceiro == "A"){
        cout << "A" << endl;
    } else if(terceiro == "B"){
        cout << "B" << endl;
    } else if(terceiro == "C"){
        cout << "C" << endl;
    }

    cout << "A quantidade de votos nulos foi " << nulo << endl;

    cout << "A quantidade de votos brancos foi " << branco << endl;

    cout << "Candidato A com " << A << " votos" << endl;

    cout << "Candidato B com " << B << " votos" << endl;

    cout << "Candidato C com " << C << " votos" << endl;

    return 0;
}