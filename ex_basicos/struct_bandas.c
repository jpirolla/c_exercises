/* desenvolver um programa em C que gerencie informações sobre diferentes bandas de música. Cada banda será representada por uma estrutura (struct) contendo os seguintes campos:

nome: uma cadeia de caracteres para armazenar o nome da banda.
genero: uma cadeia de caracteres para especificar o gênero musical da banda.
ano_formacao: um inteiro que indica o ano em que a banda foi formada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a struct para representar uma banda
struct Banda {
    char nome[50];
    char genero[30];
    int ano_formacao;
};

int main() {
    // Criando um array de structs para armazenar informações de várias bandas
    struct Banda bandas[] = {
        {"Metallica", "Heavy Metal", 1981},
        {"The Beatles", "Rock", 1960},
        {"Pink Floyd", "Progressive Rock", 1965},
        {"Queen", "Rock", 1970},
        {"Led Zeppelin", "Rock", 1968}
    };

    int num_banda;

    // Solicitando ao usuário que entre com o número da banda desejada
    printf("Entre com um número de 0 a 4 para escolher uma banda:\n");
    scanf("%d", &num_banda);

    // Verificando se o número digitado está dentro do intervalo válido
    if (num_banda < 0 || num_banda >= sizeof(bandas) / sizeof(bandas[0])) {
        printf("Número inválido!\n");
        return 1;  // Encerrando o programa com código de erro
    }

    // Exibindo as informações da banda escolhida pelo usuário
    printf("\nInformações da banda:\n");
    printf("Nome: %s\n", bandas[num_banda].nome);
    printf("Gênero: %s\n", bandas[num_banda].genero);
    printf("Ano de formação: %d\n", bandas[num_banda].ano_formacao);

    return 0;  
}


