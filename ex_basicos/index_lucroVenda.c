/*
Simular um dia da venda de uma loja. 
- Os preços variam de 5 a 100 
- cada cliente compra apenas 1 produto
- id do produto gerado aleatoriamente e atrelado a ele teremos as infomações de preço 
- id do cliente aleatório e atrela os produtos comprados  
- numero de clientes 

Maximo 200 produtos e 50 clientes

FATURAMENTO
O valor obtido pela loja será a soma da valor do produto (associado ao id) * qtd vendida 
https://www.youtube.com/watch?v=k-e_egOU-o4&ab_channel=PedroO.SVazdeMelo
*/


// DEFINIR MACROS 

#define MIN_PRECO 5
#define MAX_PRECO 100
#define MAX_PRODUTOS 200
#define MAX_CLIENTES 50 

#include<stdio.h>
#include<random.h>

int main(){
    // usar o indice do preço para identificar o id
    // nesse caso, o indice nao é só uma posição na memoria, tem também um valor semantico! exemplo: precos[1] = 88;
    float precos[MAX_PRECO];
    int compras[MAX_CLIENTES];


    int n_prod = 0, n_clientes;

    //gerar uma qtd aleatoria do numero de produtos
    n_prod = randInt(1, MAX_PRODUTOS);

    //a cada linha, atribuo um preço aleatorio
    for(int i = 0; i < n_prod; i++){
        precos[i] = randInt(5, 100);
    }

    //COMPRA - CLIENTES

    n_clientes = randInt(1, MAX_CLIENTES);

    for(int i=0; i< n_clientes; i++){
        compras[i] = random(n_prod);
    }

    float faturamento = 0;

    printf("")
    for(int i = 0; i < n_clientes; i++){

        faturamento += precos[compras[i]];

    }

    printf("\nFaturamento: %f", faturamento);

    return 0;
}