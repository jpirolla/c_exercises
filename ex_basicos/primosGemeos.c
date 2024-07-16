#include <stdio.h>
#include <locale.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Se encontrarmos um divisor, não é primo
        }
    }
    return 1; // Se nenhum divisor foi encontrado, é primo
}

int main() {
    setlocale(LC_ALL, "");
    int posicao, count_gemeos = 0;

    do {
        printf("Digite a posição dos primos gêmeos (deve ser um inteiro menor que 1000)\n");
        scanf("%d", &posicao);
        if (posicao < 1 || posicao > 1000){
            printf("Erro! Tente novamente\n");
        }
    } while (posicao < 1 || posicao > 1000);

    for (int i = 3; count_gemeos < posicao; i += 2) { // Começa em 3 e pula de 2 (pego só impares)
        if (isPrime(i) == 1 && isPrime(i + 2) == 1) { // Se ambos são primos, são gêmeos (já que estou indo de 2 em dois)
            count_gemeos++;
            if (count_gemeos == posicao) { // se for o par da posição desejada
                printf("Os primos gêmeos na posição %d são: (%d, %d)\n", posicao, i, i + 2);
                break;
            }
        }
    }

    return 0;
}
