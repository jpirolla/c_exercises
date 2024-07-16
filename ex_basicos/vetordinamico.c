#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    int i, tam, *vet;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tam);
    srand(time(NULL));

    //alocação 
    vet = malloc(tam * sizeof(int));

    if (vet){
        for (i = 0; i < tam; i++){
            *(vet +i)  = rand() %100;
        }

        for( i = 0; i < tam; i++){ 
            printf("%d ", *(vet+1));

        }
        
    } 
    else { 
        printf("Erro ao alocar memória\n");

    }
    return 0;
}