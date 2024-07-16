#include <stdio.h>
#include <string.h>  


int main(){

    int n, res = 1;
    int i, j, num, fatorial;

    printf("Digite um numero: ");
    scanf("%d", &N);

 

    for(i=1; i<=n; ++i){
        num = 1.0/i;
        fatorial = 1;

        for(j=num; j>0; --j){ 
            fatorial*= num;
        }

        res += fatorial; 

}

printf("Valor de 'E': %d", E);

}

