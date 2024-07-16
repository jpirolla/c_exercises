#include<stdio.h>

int main(){
    float soma = 0;
    float numerador = 1.0;

    for(int i=1; i<=50; i++){
        printf("%f/%d ", numerador, i);
        soma += numerador/i;
        numerador += 2;
    }
    printf("%f\n", soma);

    return 0;
}