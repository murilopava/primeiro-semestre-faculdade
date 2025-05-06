#include <iostream>
using namespace std;

int main(){
    double precoProduto;

    cout << "=====================================" << endl;
    cout << "       FINALIZE A SUA COMPRA" << endl;
    cout << "=====================================" <<endl;
    
    cout << "Preco do produto: ";
    cin >> precoProduto;


    cout << "1) A vista em dinheiro ou cheque, recebe 15% de desconto" << endl <<
            "2) A vista no cartao de credito, recebe 10% de desconto" << endl <<
            "3) Em duas vezes, preco normal de etiqueta sem juros" << endl <<
            "4) Em tres ou mais vezes, preco normal de etiqueta mais juros de 10%" << endl;


    int metodoDePagamento;
    cout << "Escolha o metodo de pagamento: ";
    cin >> metodoDePagamento;

    double precoProdutoAtt;
    
    if(metodoDePagamento == 1){
        precoProdutoAtt = precoProduto - precoProduto*0.15;
    }else if(metodoDePagamento == 2){
        precoProdutoAtt = precoProduto - precoProduto*0.10;
    }else if(metodoDePagamento == 3){
        precoProdutoAtt = precoProduto;
    }else if(metodoDePagamento == 4){
        precoProdutoAtt = precoProduto + precoProduto*0.10;
    }else{
        cout << "Digite um metodo de pagamento valido!";
        
        return 1;
    }

    cout << "O valor final da sua compra foi de " << precoProdutoAtt;
   
    return 0;
    
}