#include<stdio.h>

int main() {
    int n, limite, contador = 0;
    printf("Digite um número n e o limite da tabuada:\n");
    scanf("%d %d", &n, &limite);

    while (contador <= limite) {
        printf("%d x %d = %d\n", n, contador, n * contador);
        contador++;
    }
    printf("Fim da tabuada do número %d\n", n);
    return 0;
}

