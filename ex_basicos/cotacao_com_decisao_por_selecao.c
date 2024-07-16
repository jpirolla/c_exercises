/*
Elabore um algoritmo que, com base na cotação do dólar no dia:
- permita saber a conversão de uma quantidade de dólares para real. Exiba a quantidade em reais.
- permita saber a conversão de uma quantidade de reais para dólares. Exiba a quantidade em dólares.

O algoritmo deverá solicitar ao usuário selecionar a opção de conversão desejada.
*/

#include <stdio.h>

int main(void) {
  //declaração das variáveis de entrada e saida
	int opc;
    float dolar, real, cotacao;

	//solicitar os dados ao usuário
	printf("\n********** Inicio do Programa ************\n\n");
	printf("Digite a opção desejada: 1 - para conversão de dolar para real; 2 - para conversão de real para dolar\n");
	scanf("%i",&opc);
    printf("Digite a cotação do dólar do dia:\n");
	scanf("%f",&cotacao);

    //valida a opção digitada pelo usuário usando a estrutura SWITCH (decisão por seleção)
    switch(opc){
        case 1:  // caso  opc=1, faça:
            printf("\nDigite o valor dos dólares a serem convertidos para real: ");
            scanf("%f",&dolar);
            real = dolar*cotacao;
            printf("\nA quantidade de reais convertidos é %0.2f:",real);
            break;
        case 2:  // caso  opc=2, faça:
            printf("\nDigite o valor dos reais a serem convertidos para dolar: ");
            scanf("%f",&real);
            dolar = real/cotacao;
            printf("\nA quantidade de dólares convertidos é %0.f:",dolar);
            break;
        default: // caso opc não seja igual a nenhum dos casos anteriores, faça:
            printf("\nOpção de conversão inválida :( ");
            break;
    }

	//fim do programa
	printf("\n********** Fim do Programa ************\n\n");
  return 0;
}