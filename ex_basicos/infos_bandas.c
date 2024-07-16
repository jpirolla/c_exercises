#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BANDAS 10
#define MAX_NOME 50

// Definição da struct Banda
struct Banda {
    char nome[MAX_NOME];
    char genero[MAX_NOME];
    int numero_integrantes;
    int ano_formacao;
};

int main() {
    struct Banda bandas[MAX_BANDAS];
    int num_bandas;

    // Pedir ao usuário quantas bandas ele deseja inserir (até MAX_BANDAS)
    printf("Quantas bandas você deseja inserir (até %d)? ", MAX_BANDAS);
    scanf("%d", &num_bandas);

    // Verificar se o número de bandas é válido
    if (num_bandas < 1 || num_bandas > MAX_BANDAS) {
        printf("Número inválido de bandas. Encerrando o programa.\n");
        return 1;
    }

    // Limpar o buffer de entrada
    while (getchar() != '\n');

    // Pedir ao usuário para inserir informações de cada banda
    for (int i = 0; i < num_bandas; i++) {
        printf("\n=== Banda %d ===\n", i + 1);
        printf("Nome da banda: ");
        fgets(bandas[i].nome, sizeof(bandas[i].nome), stdin);
        
        printf("Gênero: ");
        fgets(bandas[i].genero, sizeof(bandas[i].genero), stdin);
       
       
        printf("Número de integrantes: ");
        scanf("%d", &bandas[i].numero_integrantes);

        printf("Ano de formação: ");
        scanf("%d", &bandas[i].ano_formacao);

        // Limpar o buffer de entrada
        while (getchar() != '\n');
    }

    // Imprimir informações das bandas
    printf("\n=== Informações das Bandas ===\n");
    for (int i = 0; i < num_bandas; i++) {
        printf("\nBanda %d:\n", i + 1);
        printf("Nome: %s\n", bandas[i].nome);
        printf("Gênero: %s\n", bandas[i].genero);
        printf("Número de integrantes: %d\n", bandas[i].numero_integrantes);
        printf("Ano de formação: %d\n", bandas[i].ano_formacao);
    }

    return 0;
}
