#include<stdio.h>

int main(){
    int n, soma = 0;
    puts("Digite o número que quer saber os divisores");
    scanf("%d", & n);

    for(int i=1; i < n; ++i){
        if(n % i == 0){
            soma += i;
        }
    }
    printf("%d ", soma);
    return 0;
}