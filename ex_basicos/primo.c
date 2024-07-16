#include <stdio.h>

int main() {
    int n;
    char verifica = 's'; // Changed to single character constant

    printf("Digite um valor n > 0: ");
    scanf("%d", &n);

    if (n > 1) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                verifica = 'n'; // Changed to single character constant
                break; // não preciso mais chegar nenhum caracter
            }
        }
        if (verifica == 's') { // Changed 'p' to 's'
            printf("O número é primo");
        } else {
            printf("O número não é primo");
        }
    } else {
        printf("O número não é primo\n"); // Added handling for n <= 1
    }
    return 0;
}
