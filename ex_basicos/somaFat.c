#include <stdio.h>
#include <stdlib.h>

unsigned long long calculaFatorial(int n) 
{
    unsigned long long resultado = 1; 
    // como i começa em 1, não preciso fazer a verificação  if(n!=0 && n!=1)
    for(int i = 1; i <= n; i++) 
    {
        resultado *= i;
    }
    return resultado; 
}

unsigned long long calculaSomaFatoriais(int n) 
{
    unsigned long long resultado = 0; // como eu acumulo o valor das somas, deve inicializar em 0 (sem nada somado)
    for(int i = 1; i <= n; i++)
    {
    resultado += calculaFatorial(i);
    }

    return resultado;
}

long double calculaSerieE(int n) 
{
    long double resultado = 0.0;
        for(int i = 1; i <= n; i++)
        {
            resultado += 1.0 / calculaFatorial(i);
        } 
        
    return resultado;
}


int main() {
    int num_escolhido, opc;
    unsigned long long resultado1, resultado2; // unsigned long long foi usado para suportar fatoriais de números muito grandes
    long double resultado3;

    // INICIALIZAÇÃO E ESCOLHA DE OPC 
    printf("\n\n:::: BEM-VIND@S AO PROGRAMA ::::\n\n");

    printf("\n\nEscolha uma das opcoes a seguir:\n(1) - Calcular o fatorial do numero N; \n(2) - Calcular a somatoria dos fatoriais de 1 ate N; \n(3) - Calcular a serie E; \n(4) - Calcular todas as opções anteriores;\nDigite outro número diferente para sair.\n\nDigite sua opcao ... ");

    scanf("%i", &opc);

    // SWITCASE - CHAMAR FUNÇÕES ADEQUADAS
    while (opc < 5 && opc > 0) {
        printf("Digite o numero N: ");
        scanf("%i", &num_escolhido);

        switch (opc) {
            case 1: 
                resultado1 = calculaFatorial(num_escolhido);
                printf("\n:::::: RESULTADO ::::::");
                printf("\nO fatorial de %i é: %llu\n", num_escolhido, resultado1);        
                break;
            // os demais casos incluem tratamento de exceção para n fora do intervalo
            case 2: 
                if(num_escolhido != 0)
                {
                    resultado2 = calculaSomaFatoriais(num_escolhido);
                    printf("\n:::::: RESULTADO ::::::");
                    printf("\nA somatória dos fatoriais de 1 a %i é: %llu\n", num_escolhido, resultado2);
                }

                else
                {
                    printf("\nOPS! Número inválido... Digite um número no intervalo [1-N] para as opções (2) e (3)");
                }
                break;

            case 3: 
                if(num_escolhido != 0)
                {
                    resultado3 = calculaSerieE(num_escolhido);
                    printf("\n:::::: RESULTADO ::::::");
                    printf("\nO resultado da serie E = 1/1! + 1/2! + ... + 1/(n-1)! + 1/n!, para n=%i é: %.15Lf\n", num_escolhido, resultado3);
                }
                else
                {
                    printf("\nOPS! Número inválido... Digite um número no intervalo [1-N] para as opções (2) e (3)");
                }
                break;

            case 4: 
                resultado1 = calculaFatorial(num_escolhido);    
                resultado2 = calculaSomaFatoriais(num_escolhido);
                resultado3 = calculaSerieE(num_escolhido);

                printf("\n:::::: RESULTADO ::::::");
                printf("\n1) O fatorial de %i é: %llu\n", num_escolhido, resultado1);
                if(num_escolhido != 0)
                {        
                printf("\nA somatória dos fatoriais de 1 a %i é: %llu\n", num_escolhido, resultado2);
                printf("\n2) O resultado da serie E = 1+ 1/1! + 1/2! + ... + 1/(n-1)! + 1/n!, para n=%i é: %.15Lf\n", num_escolhido, resultado3);
                }
                else
                {
                    printf("\nOPS! Número inválido... Digite um número no intervalo [1-N] para as opções (2) e (3)");
                }

            default:
                break;
        }

        printf("\n\nEscolha uma das opcoes a seguir:\n(1) - Calcular o fatorial do numero N; \n(2) - Calcular a somatoria dos fatoriais de 1 ate N; \n(3) - Calcular a serie E;\n(4) - Calcular todas as opções anteriores;\nDigite outro número diferente para sair.\n\n Digite sua opcao ... \n Digite outro número diferente para sair.\n\nDigite sua opcao ... ");
        scanf("%i", &opc);
    }

    return 0;
}
