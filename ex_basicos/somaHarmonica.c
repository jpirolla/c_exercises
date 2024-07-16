#include<stdio.h>


int main(){
    int n;
    float soma = 0;
    printf("Digite um n\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        soma += 1.0/i;
    }
    printf("%f\n", soma);
    return 0;
}