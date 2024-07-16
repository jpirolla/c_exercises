#include<stdio.h>
#include<stdlib.h> 

int main(void){
    FILE *file;

    file = fopen("teste.txt", "a");
    if(file == NULL){
        printf("O aquivo nao pode ser aberto\n");
        getchar();
        exit(1);
    }

    fprintf(file, "Primeira linha\n");

    char frase[] = "Segunda linha";

    fputs(frase, file);

    char caractere = '3';
    fputc(caractere, file);

    fclose(file);

    system("pause");
    return 0;
}