#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para listar os nomes dos estudantes
void listarEstudantes(const char *caminho) {
    FILE *arq;
    char primeironome[20], sobrenome[30];

    arq = fopen(caminho, "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while (fscanf(arq, "%s %s", primeironome, sobrenome) != EOF) {
        printf("%s %s\n", primeironome, sobrenome);
    }

    fclose(arq); // Fechar o arquivo após a leitura
}

// Função para adicionar um novo estudante ao arquivo
void adicionarEstudante(const char *caminho) {
    FILE *arq;
    char nome_completo[50];

    printf("Digite o nome completo do estudante a ser adicionado: ");
    fflush(stdin);
    fgets(nome_completo, sizeof(nome_completo), stdin);
    nome_completo[strcspn(nome_completo, "\n")] = '\0'; // Remove a quebra de linha do final

    arq = fopen(caminho, "a");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo para adicionar estudante.\n");
        return;
    }

    fprintf(arq, "%s\n", nome_completo);
    printf("Estudante adicionado com sucesso.\n");

    fclose(arq); // Fechar o arquivo após a escrita
}

// Função para consultar estudantes pelo primeiro nome
void consultarEstudante(const char *caminho, const char *primeiro_nome) {
    FILE *arq;
    char nome[20], sobrenome[30];
    int encontrados = 0;

    arq = fopen(caminho, "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo para consultar estudantes.\n");
        return;
    }

    while (fscanf(arq, "%s %s", nome, sobrenome) != EOF) {
        if (strncmp(nome, primeiro_nome, strlen(primeiro_nome)) == 0) {
            printf("%s %s\n", nome, sobrenome);
            encontrados++;
        }
    }

    fclose(arq); // Fechar o arquivo após a consulta

    if (encontrados == 0) {
        printf("Nenhum estudante encontrado com o primeiro nome '%s'.\n", primeiro_nome);
    }
}

int main() {
    int opc;
    char caminho_arquivo[] = "nomes-estudantes.txt";

    do {
        printf("\nDigite a opção desejada:\n"
               "1. Listar o nome dos estudantes;\n"
               "2. Consultar se um estudante está matriculado;\n"
               "3. Registrar um novo estudante;\n"
               "0. Sair\n");
        printf("Sua opção: ");
        scanf(" %d", &opc); // Adiciona um espaço antes de %d para consumir qualquer quebra de linha pendente

        switch (opc) {
            case 1:
                listarEstudantes(caminho_arquivo);
                break;
            case 2: {
                char primeiro_nome[20];
                printf("Digite o primeiro nome do estudante a consultar: ");
                scanf(" %19s", primeiro_nome); // Limita a leitura para 19 caracteres
                consultarEstudante(caminho_arquivo, primeiro_nome);
                break;
            }
            case 3:
                adicionarEstudante(caminho_arquivo);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

    } while (opc != 0);

    return 0;
}
