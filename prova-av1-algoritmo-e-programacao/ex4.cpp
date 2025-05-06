#include <iostream>
using namespace std;

int main(){

    const double PAO = 0.75;
    const double PAODEQUEIJO = 2.50;
    const double PAODEFORMA = 5;
    const double BISNAGA = 6;
    const double LEITE = 8;
    const double PAODOCE = 4.50;
    const double SUSPIRO = 4;

    cout << "===============================" << endl;
    cout << "|       PADARIA GANELLO       |"<< endl; // MISTURA DOS NOMES GABRIEL COM PAVANELLO =)
    cout << "===============================" << endl;
    cout << "|      Pao      ---->  R$0.75 |" << endl;
    cout << "| Pao de Queijo ---->  R$2.50 |" << endl;
    cout << "|  Pao de Forma ---->  R$5.00 |" << endl;
    cout << "|    Bisnaga    ---->  R$6.00 |" << endl;
    cout << "|     Leite     ---->  R$8.00 |" << endl;
    cout << "|    Pao Doce   ---->  R$4.50 |" << endl;
    cout << "|    Suspiro    ---->  R$4.00 |" << endl;
    cout << "===============================" << endl; 

    int quantPao;
    cout << "Quantos paes voce comprou? ";
    cin >> quantPao;

    int quantPaoDeQueijo;
    cout << "Quantos paes de queijo voce comprou? ";
    cin >> quantPaoDeQueijo;

    int quantPaoDeForma;
    cout << "Quantos paes de forma voce comprou? ";
    cin >> quantPaoDeForma;

    int quantBisnaga;
    cout << "Quantas bisnagas voce comprou? ";
    cin >> quantBisnaga;

    int quantLeite;
    cout << "Quantos pacotes de leite voce comprou? ";
    cin >> quantLeite;

    int quantPaoDoce;
    cout << "Quantos paes doces voce comprou? ";
    cin >> quantPaoDoce;

    int quantSuspiro;
    cout << "Quantos suspiros voce comprou? ";
    cin >> quantSuspiro;

    double valorCompra = (quantPao*PAO) + (quantPaoDeQueijo * PAODEQUEIJO) + (quantPaoDeForma*PAODEFORMA) + (quantPaoDeForma*PAODEFORMA) + 
    (quantBisnaga * BISNAGA) + (quantLeite * LEITE) + (quantPaoDoce * PAODOCE) + (quantSuspiro * SUSPIRO);
    
    cout << "O valor da sua compra foi de R$" << valorCompra;

    if(quantBisnaga >= 1 or quantPaoDeForma >= 1){

        valorCompra = valorCompra - (valorCompra*0.15);
        cout << ", porem voce recebeu 15% de desconto, ficando assim R$" << valorCompra;

    }else if(quantPao >= 10 and quantPaoDeQueijo >= 1){

        valorCompra = valorCompra - (valorCompra*0.10);
        cout << ", porem voce recebeu 10% de desconto, ficando assim R$" << valorCompra;

    }else if(quantLeite == 1){
            if(quantPaoDoce >= 1 or quantSuspiro >= 1){
                valorCompra = valorCompra - (valorCompra*0.05);
                cout << ", porem voce recebeu 5% de desconto, ficando assim R$" << valorCompra;
            }
    }

    return 0;
    
}

