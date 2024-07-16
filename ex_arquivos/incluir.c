#include<stdio.h>
#include<stdlib.h> 

int main(void){
    FILE *file, *file2;
    int x, y, z;

    // criando um novo arquivo
    file = fopen("teste2.txt", "a");
    if(file == NULL){
        printf("O aquivo nao pode ser aberto\n");
        getchar();
        exit(0);
    }

    fprintf(file, "Primeira linha\n");

    fclose(file);

    // testando ativionar num arquivo que ja tem escrito

    file2 = fopen("teste.txt", "a");
    if(file2 == NULL){
        printf("O aquivo nao pode ser aberto\n");
        getchar();
        exit(0);
    }

    fprintf(file2, "\nAdicionando mais uma linha\n");

    fclose(file2);

    return 0;

}