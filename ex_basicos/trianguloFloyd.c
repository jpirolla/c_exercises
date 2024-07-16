#include<stdio.h>

int main(){
    int n;
    int c = 0;

    printf("Digite um valor n>0: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            c++; 
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}