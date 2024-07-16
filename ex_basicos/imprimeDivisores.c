#include<stdio.h>

int main(){
    int n;
    puts("Digite o número que quer saber os divisores");
    scanf("%d", & n);

    for(int i=1; i <= n; ++i){
        if(n % i == 0){
            printf("%d, ", i);
        }
    }
    return 0;
}