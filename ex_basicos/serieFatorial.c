#include <stdio.h>

// Função para calcular o fatorial de um número
unsigned long long int fatorial(int n) {
    unsigned long long int fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int n;
    double S = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Verifica se n é negativo
    if (n < 0) {
        printf("Erro: n deve ser um número não negativo.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Calcula o fatorial de n
    unsigned long long int fat_n = fatorial(n);

    // Verifica se o fatorial de n é diferente de zero antes de calcular S
    if (fat_n != 0) {
        S = 1.0 / fat_n;
        printf("S = %lf\n", S);
    } else {
        printf("Erro: O fatorial de %d é muito grande para ser representado.\n", n);
    }

    return 0;
}
