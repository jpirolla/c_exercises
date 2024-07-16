#include <stdio.h>
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetor[100]; 
    int count = 0;
    int totalnumeros;

    do {
        printf("\nEntre com um numero ou use <-999> para terminar: ");
        scanf("%d", &vetor[count]);
        if (vetor[count] == -999) {
            break;
        }
        count++;
    } while(count < 100);

    totalnumeros = count;  // Não incluir -999
    printf("\n\nOs numeros digitados foram:");
    for (count = 0; count < totalnumeros; count++) {
        printf(" %d", vetor[count]);
    }
    printf("\n");

    return 0;
}
