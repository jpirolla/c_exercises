#include<stdio.h>
#include<stdlib.h> 

int main(void){
    FILE *file;
    int x, y, z;

    file = fopen("teste.txt", "r");
    if(file == NULL){
        printf("O aquivo nao pode ser aberto\n");
        getchar();
        exit(0);
    }

    char frase[100]; 
    while(fgets(frase, 100, file) != NULL){
        printf("%s", frase);

    }

    fclose(file);
    return 0;

}