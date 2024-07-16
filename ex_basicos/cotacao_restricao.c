
#include <stdio.h>

int main(void) {
  
  // declara os dados de entrada do tipo float
  float cotacao, qte_dolares;
  // declara os dados de saida do tipo float
  float qte_reais;
  //declara dados a ser usados nas instruções
  float valor_maximo = 10000;  //declara e inicializa a variavel

  //escreve na interface de usuário a mensagem
  printf("Digite o valor da cotação do dólar hoje:  ");
  //lê o valor digitado pelo usuário e o armazena na variável cotacao. 
  //O primeiro parâmetro %f define o tipo de variável (float) a ser lida
  scanf("%f", &cotacao);

  //escreve na interface de usuário a mensagem
  printf("Digite o valor em dólares a ser convertido:   ");
  //lê o valor digitado pelo usuário e o armazena na variável qte_dolares. 
  //O primeiro parâmetro %f define o tipo de variável (float) a ser lida
  scanf("%f", &qte_dolares);

  //verifica a condição de quantidade máxima de dólares a convertir
  if(qte_dolares <= valor_maximo){
    //caso a expressão seja VERDADEIRA 
    //calcula a conversão de dólares para reais
    qte_reais = qte_dolares*cotacao;
    //escreve na tela o resultado
    printf("A conversão em reais é:   %0.2f", qte_reais);
  }
  else{
    //caso a expressão seja FALSA 
    printf("A quantidade de dólares excede o valor máximo permitido pelo Banco Central");
  }

  return 0;
}